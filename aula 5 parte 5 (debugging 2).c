#include <stdio.h>

int somar(int a, int b) {
    int resultado = a + b;

    return resultado;
}

int main(void) {
    printf("%d\n", somar(5, 3));

    return 0;
}