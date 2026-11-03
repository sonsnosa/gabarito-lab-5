#include <stdio.h>

double celsiusParaFahrenheit(double celsius);
double fahrenheitParaCelsius(double fahrenheit);
double kmParaMilhas(double km);
void mostrarMenu(void);

int main(void) {
    int opcao;
    double valor;
    double resultado;

    do {
        mostrarMenu();

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &valor);

                resultado = celsiusParaFahrenheit(valor);

                printf("%.2f Celsius = %.2f Fahrenheit\n",
                       valor, resultado);
                break;

            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &valor);

                resultado = fahrenheitParaCelsius(valor);

                printf("%.2f Fahrenheit = %.2f Celsius\n",
                       valor, resultado);
                break;

            case 3:
                printf("Digite a distancia em quilometros: ");
                scanf("%lf", &valor);

                resultado = kmParaMilhas(valor);

                printf("%.2f km = %.2f milhas\n",
                       valor, resultado);
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}

void mostrarMenu(void) {
    printf("\n===== CONVERSOES =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Quilometros para Milhas\n");
    printf("0 - Sair\n");
}

double celsiusParaFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

double fahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double kmParaMilhas(double km) {
    return km * 0.621371;
}