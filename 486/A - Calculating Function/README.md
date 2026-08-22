<h2><a href="https://codeforces.com/contest/486/problem/A" target="_blank" rel="noopener noreferrer">486A — Calculating Function</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 486A](https://codeforces.com/contest/486/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Calculating Function</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>For a positive integer <span class="tex-span"><i>n</i></span> let's define a function <span class="tex-span"><i>f</i></span>:</p><p><span class="tex-span"><i>f</i>(<i>n</i>) =  - 1 + 2 - 3 + .. + ( - 1)<sup class="upper-index"><i>n</i></sup><i>n</i></span> </p><p>Your task is to calculate <span class="tex-span"><i>f</i>(<i>n</i>)</span> for a given integer <span class="tex-span"><i>n</i></span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The single line contains the positive integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 10<sup class="upper-index">15</sup></span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print <span class="tex-span"><i>f</i>(<i>n</i>)</span> in a single line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022147112604257868" id="id0021252114997498006" class="input-output-copier">Copy</div></div><pre id="id0022147112604257868">4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005445574850107695" id="id007085494852473312" class="input-output-copier">Copy</div></div><pre id="id005445574850107695">2<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004470311675719437" id="id006188883002709653" class="input-output-copier">Copy</div></div><pre id="id004470311675719437">5<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005258916302041625" id="id005651644554283283" class="input-output-copier">Copy</div></div><pre id="id005258916302041625">-3<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p><span class="tex-span"><i>f</i>(4) =  - 1 + 2 - 3 + 4 = 2</span></p><p><span class="tex-span"><i>f</i>(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3</span></p></div>