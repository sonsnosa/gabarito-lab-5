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

int main(void) {
    int opcao;
    double a, b, resultado;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {

            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);

            printf("Digite o segundo numero: ");
            scanf("%lf", &b);

            switch (opcao) {

                case 1:
                    resultado = somar(a, b);
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case 2:
                    resultado = subtrair(a, b);
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case 3:
                    resultado = multiplicar(a, b);
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case 4:
                    if (b == 0) {
                        printf("Erro: divisao por zero nao e permitida.\n");
                    } else {
                        resultado = dividir(a, b);
                        printf("Resultado: %.2f\n", resultado);
                    }
                    break;
            }

        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("Calculadora encerrada.\n");

    return 0;
}