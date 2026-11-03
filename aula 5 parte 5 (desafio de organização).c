#include <stdio.h>

double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    return a / b;
}

void mostrarMenu(void) {
    printf("\n========================\n");
    printf("     CALCULADORA\n");
    printf("========================\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
}

double executarOperacao(int opcao, double a, double b) {
    switch (opcao) {

        case 1:
            return somar(a, b);

        case 2:
            return subtrair(a, b);

        case 3:
            return multiplicar(a, b);

        case 4:
            return dividir(a, b);

        default:
            return 0.0;
    }
}

int main(void) {
    int opcao;
    double a, b;
    double resultado;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {

            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);

            printf("Digite o segundo numero: ");
            scanf("%lf", &b);

            if (opcao == 4 && b == 0) {

                printf("Erro: divisao por zero nao e permitida.\n");

            } else {

                resultado = executarOperacao(opcao, a, b);

                printf("Resultado: %.2f\n", resultado);
            }

        } else if (opcao != 0) {

            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("Calculadora encerrada.\n");

    return 0;
}