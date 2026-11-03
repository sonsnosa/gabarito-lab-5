#include <stdio.h>

int calcular(void) {
    int resultado = 10 + 5;

    return resultado;
}

int main(void) {
    int resultado = calcular();

    printf("%d\n", resultado);

    return 0;
}