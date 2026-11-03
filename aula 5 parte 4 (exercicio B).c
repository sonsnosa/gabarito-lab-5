#include <stdio.h>

double celsiusParaFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

double fahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double kmParaMilhas(double km) {
    return km * 0.621371;
}

int main(void) {
    double celsius;
    double fahrenheit;
    double km;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    printf("%.2f Celsius = %.2f Fahrenheit\n",
           celsius, celsiusParaFahrenheit(celsius));

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("%.2f Fahrenheit = %.2f Celsius\n",
           fahrenheit, fahrenheitParaCelsius(fahrenheit));

    printf("Digite a distancia em km: ");
    scanf("%lf", &km);

    printf("%.2f km = %.2f milhas\n",
           km, kmParaMilhas(km));

    return 0;
}