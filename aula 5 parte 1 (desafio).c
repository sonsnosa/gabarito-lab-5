#include <stdio.h>

double somar(double a, double b)
{
    return a + b;
}

double subtrair(double a, double b)
{
    return a - b;
}

double multiplicar(double a, double b)
{
    return a * b;
}

double dividir(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
}

int main(void)
{
    double a = 10;
    double b = 5;

    printf("Soma: %.2f\n", somar(a, b));
    printf("Subtracao: %.2f\n", subtrair(a, b));
    printf("Multiplicacao: %.2f\n", multiplicar(a, b));
    printf("Divisao: %.2f\n", dividir(a, b));

    return 0;
}