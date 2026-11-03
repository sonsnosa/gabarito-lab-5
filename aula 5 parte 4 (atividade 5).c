#include <stdio.h>

double lerNotaValida(void) {
    double nota;

    do {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%lf", &nota);

    } while (nota < 0 || nota > 10);

    return nota;
}

double calcularMedia(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main(void) {
    double nota1;
    double nota2;
    double nota3;
    double media;

    nota1 = lerNotaValida();
    nota2 = lerNotaValida();
    nota3 = lerNotaValida();

    media = calcularMedia(nota1, nota2, nota3);

    printf("Media = %.2f\n", media);

    return 0;
}