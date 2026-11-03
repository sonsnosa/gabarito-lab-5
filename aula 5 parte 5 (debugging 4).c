#include <stdio.h>

int adicionarUm(int numero) {
    numero++;

    return numero;
}

int main(void) {
    int x = 10;

    x = adicionarUm(x);

    printf("%d\n", x);

    return 0;
}