#include <stdio.h>

double calcularQuadrado(double x) {
    return x * x;
}

double calcularAreaCirculo(double raio) {
    const double PI = 3.1415926535;

    return PI * calcularQuadrado(raio);
}

int main(void) {
    double raio;
    double area;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = calcularAreaCirculo(raio);

    printf("Area do circulo: %.2f\n", area);

    return 0;
}