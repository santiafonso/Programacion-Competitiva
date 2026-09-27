# Programación Competitiva

Soluciones a problemas y contests de programación competitiva, en C++.

## Estructura

| Carpeta | Contenido |
|---|---|
| `cses/` | Problemas del [CSES Problem Set](https://cses.fi/problemset/) |
| `Contests/` | Rondas de Codeforces, torneos y contests del cursillo |
| `simu/` | Simulacros de ICPC (regionales Brasil, SWERC) |
| `simu_equipo/` | Simulacros de 2025 con mi equipo: TAP, regionales LatAm, USP Try-Outs, Gran Premio de México, SWERC |
| `TC2025/` | Contests del Training Camp Argentina 2025 |
| `curso_2024/` | Ejercicios del curso de programación competitiva 2024, por día |
| `red_prog_comp/` | Problemas de la Red de Programación Competitiva |

`simu_equipo/` y `TC2025/` vienen de [jmmochko/prog_comp](https://github.com/jmmochko/prog_comp), el repo de mi equipo; incluyen soluciones de mis compañeros.

`template.cpp` es la plantilla base que uso para cada problema.

## Compilar

```bash
g++ -std=c++17 -O2 -o sol problema.cpp && ./sol < input.txt
```
