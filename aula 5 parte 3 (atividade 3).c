#include <stdio.h>

void mostrarCabecalho(void);
void executarMenu(void);
void mostrarEncerramento(void);

int main(void) {
    mostrarCabecalho();
    executarMenu();
    mostrarEncerramento();

    return 0;
}

void mostrarCabecalho(void) {
    printf("==============================\n");
    printf("       MEU PROGRAMA           \n");
    printf("==============================\n");
}

void executarMenu(void) {
    int opcao;

    printf("1 - Iniciar\n");
    printf("2 - Configuracoes\n");
    printf("0 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando programa...\n");
            break;

        case 2:
            printf("Abrindo configuracoes...\n");
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }
}

void mostrarEncerramento(void) {
    printf("Programa encerrado.\n");
}