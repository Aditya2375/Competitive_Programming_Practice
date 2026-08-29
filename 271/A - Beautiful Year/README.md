<h2><a href="https://codeforces.com/contest/271/problem/A" target="_blank" rel="noopener noreferrer">271A — Beautiful Year</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 271A](https://codeforces.com/contest/271/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. Beautiful Year</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.</p><p>Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The single line contains integer <span class="tex-span"><i>y</i></span> <span class="tex-span">(1000 ≤ <i>y</i> ≤ 9000)</span> — the year number.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the minimum year number that is strictly larger than <span class="tex-span"><i>y</i></span> and all it's digits are distinct. It is guaranteed that the answer exists.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005067481161081722" id="id006373629960945512" class="input-output-copier">Copy</div></div><pre id="id005067481161081722">1987<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008532234700021228" id="id004186834876356632" class="input-output-copier">Copy</div></div><pre id="id008532234700021228">2013<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003060036771042144" id="id00039179592600341095" class="input-output-copier">Copy</div></div><pre id="id003060036771042144">2013<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00651407171444182" id="id008681767912638352" class="input-output-copier">Copy</div></div><pre id="id00651407171444182">2014<br></pre></div></div></div>