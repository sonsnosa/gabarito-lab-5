#include <stdio.h>

double celsiusParaFahrenheit(double celsius);

int main(void) {
    double celsius;
    double fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsiusParaFahrenheit(celsius);

    printf("\nTemperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

double celsiusParaFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}