#!/usr/bin/env python3
"""Compile the archive and replay locally archived samples, without network access."""
from pathlib import Path
import json, math, subprocess, tempfile

ROOT = Path(__file__).resolve().parents[1]
FIXTURES = json.loads((ROOT / "tests/samples.json").read_text())

def same(actual, expected):
    a, b = actual.split(), expected.split()
    if len(a) != len(b):
        return False
    for x, y in zip(a, b):
        if x == y:
            continue
        try:
            xx, yy = float(x), float(y)
            if math.isfinite(xx) and math.isfinite(yy) and math.isclose(xx, yy, rel_tol=1e-6, abs_tol=1e-6):
                continue
        except ValueError:
            pass
        return False
    return True

sources = sorted(str(p.relative_to(ROOT)) for p in ROOT.rglob("*")
                 if p.is_file() and ".git" not in p.parts and
                 (p.suffix == ".cpp" or (p.parent.name.isdigit() and p.name.startswith("A - "))))
assert set(sources) == set(FIXTURES), "Source inventory changed; update sample fixtures explicitly"
passed = 0
with tempfile.TemporaryDirectory() as tmp:
    for i, source in enumerate(sources):
        binary = Path(tmp) / str(i)
        subprocess.run(["g++", "-x", "c++", "-std=c++20", "-Wall", "-Wextra", "-O2",
                        str(ROOT / source), "-o", str(binary)], check=True, timeout=30)
        for n, case in enumerate(FIXTURES[source], 1):
            result = subprocess.run([str(binary)], input=case["input"], text=True,
                                    capture_output=True, timeout=3, check=True)
            assert same(result.stdout, case["output"]), f"{source}: sample {n} differs"
            passed += 1
        print(f"OK {source}: {len(FIXTURES[source])} archived samples")
print(f"PASS: {len(sources)} sources compiled; {passed} archived samples passed")
