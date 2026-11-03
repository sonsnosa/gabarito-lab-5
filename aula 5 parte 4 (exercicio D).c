#include <stdio.h>

void mostrarTabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n",
               numero, i, numero * i);
    }
}

void mostrarTabuadas(int inicio, int fim) {
    for (int numero = inicio; numero <= fim; numero++) {
        printf("\n===== TABUADA DO %d =====\n", numero);

        mostrarTabuada(numero);
    }
}

int main(void) {
    int inicio;
    int fim;

    printf("Digite o numero inicial: ");
    scanf("%d", &inicio);

    printf("Digite o numero final: ");
    scanf("%d", &fim);

    mostrarTabuadas(inicio, fim);

    return 0;
}