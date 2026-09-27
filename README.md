# Competitive Programming

Solutions to competitive programming problems and contests, in C++.

## Structure

| Folder | Contents |
|---|---|
| `cses/` | Problems from the [CSES Problem Set](https://cses.fi/problemset/) |
| `Contests/` | Codeforces rounds, tournaments and training course contests |
| `simu/` | ICPC mock contests (Brazil regionals, SWERC) |
| `simu_equipo/` | 2025 mock contests with my team: TAP, LatAm regionals, USP Try-Outs, Mexican Grand Prix, SWERC |
| `TC2025/` | Contests from Training Camp Argentina 2025 |
| `curso_2024/` | Exercises from the 2024 competitive programming course, by day |
| `red_prog_comp/` | Problems from the Red de Programación Competitiva |

`simu_equipo/` and `TC2025/` come from [jmmochko/prog_comp](https://github.com/jmmochko/prog_comp), my team's repo; they include solutions by my teammates.

`template.cpp` is the base template I use for every problem.

## Build

```bash
g++ -std=c++17 -O2 -o sol problem.cpp && ./sol < input.txt
```
