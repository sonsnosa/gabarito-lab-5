#include <stdio.h>

double calcularMedia(double a, double b) {
    return (a + b) / 2.0;
}

int main(void) {
    double media = calcularMedia(8, 9);

    printf("%.2f\n", media);

    return 0;
}