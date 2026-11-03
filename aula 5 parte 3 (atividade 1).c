#include <stdio.h>

int somar(int a, int b);

int main(void) {
    printf("%d\n", somar(2, 3));

    return 0;
}

int somar(int a, int b) {
    return a + b;
}