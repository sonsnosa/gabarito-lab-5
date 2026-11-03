#include <stdio.h>
#include <stdbool.h>

double calcularMedia(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}

bool aprovado(double media, double frequencia) {
    return media >= 7.0 && frequencia >= 75.0;
}

void mostrarResultado(double media, double frequencia) {
    printf("\n===== RESULTADO =====\n");
    printf("Media: %.2f\n", media);
    printf("Frequencia: %.2f%%\n", frequencia);

    if (aprovado(media, frequencia)) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }
}

int main(void) {
    double nota1;
    double nota2;
    double nota3;
    double frequencia;
    double media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    printf("Digite a frequencia (%%): ");
    scanf("%lf", &frequencia);

    media = calcularMedia(nota1, nota2, nota3);

    mostrarResultado(media, frequencia);

    return 0;
}