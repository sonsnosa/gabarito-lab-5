#include <stdio.h>
#include <stdbool.h>

bool ehPar(int numero) {
    return numero % 2 == 0;
}

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (ehPar(numero)) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}