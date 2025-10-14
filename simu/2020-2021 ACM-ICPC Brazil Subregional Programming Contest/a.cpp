#include <stdio.h>

int main() {
    long long N, A, B;
    scanf("%lld %lld %lld", &N, &A, &B);

    double expected_packages;

    if (A == 0) {
        // Cuando A=0, se podría complicar por paquetes vacíos, pero podemos usar B/2 como aproximación
        expected_packages = (double)N / (B / 2.0);
    } else {
        // Número esperado de cartas por paquete = promedio de A y B
        double expected_per_package = (A + B) / 2.0;
        expected_packages = N / expected_per_package;
    }

    printf("%.10f\n", expected_packages);
    return 0;
}
