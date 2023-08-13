#include <stdio.h>

// DONE 4
int retornaSomaDivisores(int numero) {
    int soma = 0;
    if (numero == 0) {
        return soma;
    } else {
        for (int i = 1; i < numero; ++i) {
            if (numero % i == 0) {
                soma += i;
            }
        }
    }
    return (soma==numero);
}

// DONE 4
void isPerfect() {
    int i, j;
    for (i = 1; i <= 1000; i++) {
        if (retornaSomaDivisores(i)) {
            printf("%d = 1", i);

            for (j = 2; j <= i/2; ++j) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }

            printf("\n");
        }
    }
}

int main() {
    isPerfect();
    return 0;
}
