#include <stdio.h>

double calcularDesconto(double valor, double percentual);

int main(void) {
    double desconto;

    desconto = calcularDesconto(100, 10);
    printf("Desconto de R$ 100,00 com 10%%: R$ %.2f\n", desconto);

    desconto = calcularDesconto(500, 5);
    printf("Desconto de R$ 500,00 com 5%%: R$ %.2f\n", desconto);

    desconto = calcularDesconto(250, 20);
    printf("Desconto de R$ 250,00 com 20%%: R$ %.2f\n", desconto);

    return 0;
}

double calcularDesconto(double valor, double percentual) {
    return valor * percentual / 100.0;
}