#include <stdio.h>
#include <stdbool.h>

bool podeEntrar(int idade, bool bloqueado, bool possuiIngresso) {
    return idade >= 18 && !bloqueado && possuiIngresso;
}

int main(void) {
    int idade;
    int bloqueado;
    int possuiIngresso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Esta bloqueado? (1 = sim, 0 = nao): ");
    scanf("%d", &bloqueado);

    printf("Possui ingresso? (1 = sim, 0 = nao): ");
    scanf("%d", &possuiIngresso);

    if (podeEntrar(idade, bloqueado, possuiIngresso)) {
        printf("Entrada permitida.\n");
    } else {
        printf("Entrada negada.\n");
    }

    return 0;
}