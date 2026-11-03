#include <stdio.h>

int dobrar(int x)
{
    x = x * 2;

    return x;
}

int main(void)
{
    int numero = 5;

    numero = dobrar(numero);

    printf("Fora: %d\n", numero);

    return 0;
}