# Competitive Programming Practice

45 C++ practice solutions, kept at their existing paths. This is a learning archive, not a claim of current Codeforces acceptance or a general-purpose input-processing library.

[Browse the live repository](https://github.com/Aditya2375/Competitive_Programming_Practice)

## Reproduce the checks

Requires Python 3 and GCC with C++20 support. No downloaded packages are needed.

```sh
python3 tests/check.py
```

The checker compiles all 45 sources, including four extensionless C++ files, and runs 91 input/output samples extracted from the problem statements already archived here. Four older extensionless files have no archived statement samples; those are compile-checked only. Token comparison ignores whitespace and allows a 1e-6 tolerance for numeric output. These checks are not exhaustive proofs, fresh judge submissions, or tests of malicious input outside contest constraints. Problem READMEs retain historical export metadata, including verdicts and ratings; those are not independently revalidated.

## Repair notes

The archived source export contained non-breaking spaces that GCC rejected, and some quoted newlines were split across lines. Those transport defects are repaired without renaming or removing sources. The problem-solving algorithms are retained. Beautiful Matrix rejects truncated input or a missing target instead of using uninitialized coordinates; loop counters and character conversions are type-safe. CI runs the same checks on pushes and pull requests with read-only repository permissions. Programs read standard input and write standard output; there is no deployed server, account, or paid service.

## Index

| Problem | Code | Samples |
|---|---|---|
| [4A: Watermelon](https://codeforces.com/contest/4/problem/A) | [Source](4/A%20-%20Watermelon/solution.cpp) | 1 |
| [41A: Translation](https://codeforces.com/contest/41/problem/A) | [Source](41/A%20-%20Translation/solution.cpp) | 3 |
| [50A: Domino piling](https://codeforces.com/contest/50/problem/A) | [Source](50/A%20-%20Domino%20piling/solution.cpp) | 2 |
| [59A: Word](https://codeforces.com/contest/59/problem/A) | [Source](59/A%20-%20Word/solution.cpp) | 3 |
| [61A: Ultra-Fast Mathematician](https://codeforces.com/contest/61/problem/A) | [Source](61/A%20-%20Ultra-Fast%20Mathematician/solution.cpp) | 4 |
| [71A: Way Too Long Words](https://codeforces.com/contest/71/problem/A) | [Source](71/A%20-%20Way%20Too%20Long%20Words/solution.cpp) | 1 |
| [110A: Nearly Lucky Number](https://codeforces.com/contest/110/problem/A) | [Source](110/A%20-%20Nearly%20Lucky%20Number/solution.cpp) | 3 |
| [112A: Petya and Strings](https://codeforces.com/contest/112/problem/A) | [Source](112/A%20-%20Petya%20and%20Strings/solution.cpp) | 3 |
| [116A: Tram](https://codeforces.com/contest/116/problem/A) | [Source](116/A%20-%20Tram/solution.cpp) | 1 |
| [136A: Presents](https://codeforces.com/contest/136/problem/A) | [Source](136/A%20-%20Presents/solution.cpp) | 3 |
| [144A: Arrival of the General](https://codeforces.com/contest/144/problem/A) | [Source](144/A%20-%20Arrival%20of%20the%20General/solution.cpp) | 2 |
| [148A: Insomnia cure](https://codeforces.com/contest/148/problem/A) | [Source](148/A%20-%20Insomnia%20cure/solution.cpp) | 2 |
| [158A: Next Round](https://codeforces.com/contest/158/problem/A) | [Source](158/A%20-%20Next%20Round/solution.cpp) | 2 |
| [200B: Drinks](https://codeforces.com/contest/200/problem/B) | [Source](200/B%20-%20Drinks/solution.cpp) | 2 |
| [228A: Is your horseshoe on the other hoof](https://codeforces.com/contest/228/problem/A) | [Source](228/A%20-%20Is%20your%20horseshoe%20on%20the%20other%20hoof) | 0 |
| [231A: Team](https://codeforces.com/contest/231/problem/A) | [Source](231/A%20-%20Team/solution.cpp) | 2 |
| [236A: Boy or Girl](https://codeforces.com/contest/236/problem/A) | [Source](236/A%20-%20Boy%20or%20Girl/solution.cpp) | 3 |
| [263A: Beautiful Matrix](https://codeforces.com/contest/263/problem/A) | [Source](263/A%20-%20Beautiful%20Matrix/solution.cpp) | 2 |
| [266A: Stones on the Table](https://codeforces.com/contest/266/problem/A) | [Source](266/A%20-%20Stones%20on%20the%20Table/solution.cpp) | 3 |
| [266B: Queue at the School](https://codeforces.com/contest/266/problem/B) | [Source](266/B%20-%20Queue%20at%20the%20School/solution.cpp) | 3 |
| [271A: Beautiful Year](https://codeforces.com/contest/271/problem/A) | [Source](271/A%20-%20Beautiful%20Year/solution.cpp) | 2 |
| [281A: Word Capitalization](https://codeforces.com/contest/281/problem/A) | [Source](281/A%20-%20Word%20Capitalization/solution.cpp) | 2 |
| [339A: Helpful Maths](https://codeforces.com/contest/339/problem/A) | [Source](339/A%20-%20Helpful%20Maths/solution.cpp) | 3 |
| [344A: Magnets](https://codeforces.com/contest/344/problem/A) | [Source](344/A%20-%20Magnets/solution.cpp) | 2 |
| [443A: Anton and Letters](https://codeforces.com/contest/443/problem/A) | [Source](443/A%20-%20Anton%20and%20Letters/solution.cpp) | 3 |
| [467A: George and Accommodation](https://codeforces.com/contest/467/problem/A) | [Source](467/A%20-%20George%20and%20Accommodation/solution.cpp) | 2 |
| [469A: I Wanna Be the Guy](https://codeforces.com/contest/469/problem/A) | [Source](469/A%20-%20I%20Wanna%20Be%20the%20Guy/solution.cpp) | 2 |
| [486A: Calculating Function](https://codeforces.com/contest/486/problem/A) | [Source](486/A%20-%20Calculating%20Function/solution.cpp) | 2 |
| [520A: Pangram](https://codeforces.com/contest/520/problem/A) | [Source](520/A%20-%20Pangram/solution.cpp) | 2 |
| [546A: Soldier and Bananas](https://codeforces.com/contest/546/problem/A) | [Source](546/A%20-%20Soldier%20and%20Bananas/solution.cpp) | 1 |
| [617A: Elephant](https://codeforces.com/contest/617/problem/A) | [Source](617/A%20-%20Elephant/solution.cpp) | 2 |
| [677A: Vanya and Fence](https://codeforces.com/contest/677/problem/A) | [Source](677/A%20-%20Vanya%20and%20Fence/solution.cpp) | 3 |
| [678A: Johny Likes Numbers](https://codeforces.com/contest/678/problem/A) | [Source](678/A%20-%20Johny%20Likes%20Numbers/solution.cpp) | 3 |
| [705A: Hulk](https://codeforces.com/contest/705/problem/A) | [Source](705/A%20-%20Hulk/solution.cpp) | 3 |
| [734A: Anton and Danik](https://codeforces.com/contest/734/problem/A) | [Source](734/A%20-%20Anton%20and%20Danik/solution.cpp) | 3 |
| [791A: Bear and Big Brother](https://codeforces.com/contest/791/problem/A) | [Source](791/A%20-%20Bear%20and%20Big%20Brother/solution.cpp) | 3 |
| [977A: Wrong Subtraction](https://codeforces.com/contest/977/problem/A) | [Source](977/A%20-%20Wrong%20Subtraction/solution.cpp) | 2 |
| [1030A: In Search of an Easy Problem](https://codeforces.com/contest/1030/problem/A) | [Source](1030/A%20-%20In%20Search%20of%20an%20Easy%20Problem/solution.cpp) | 2 |
| [1328A: Divisibility Problem](https://codeforces.com/contest/1328/problem/A) | [Source](1328/A%20-%20Divisibility%20Problem/solution.cpp) | 1 |
| [1669A: Division](https://codeforces.com/contest/1669/problem/A) | [Source](1669/A%20-%20Division) | 0 |
| [1703A: YES or YES](https://codeforces.com/contest/1703/problem/A) | [Source](1703/A%20-%20YES%20or%20YES) | 0 |
| [1760A: Medium Number](https://codeforces.com/contest/1760/problem/A) | [Source](1760/A%20-%20Medium%20Number/solution.cpp) | 1 |
| [1807A: Plus or Minus](https://codeforces.com/contest/1807/problem/A) | [Source](1807/A%20-%20Plus%20or%20Minus/solution.cpp) | 1 |
| [1915A: Odd One Out](https://codeforces.com/contest/1915/problem/A) | [Source](1915/A%20-%20Odd%20One%20Out/solution.cpp) | 1 |
| [2167A: Square](https://codeforces.com/contest/2167/problem/A) | [Source](2167/A%20-%20Square) | 0 |

Problem statements and sample inputs/outputs are attributed to Codeforces and their original authors. Historical imports used CFPusher. No license grant is implied for third-party statements.
