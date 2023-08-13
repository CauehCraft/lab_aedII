#include <stdio.h>

// DONE 6
int inverterNumeroNaoRecursivo(int numero) {
    int inverso = 0;

    while (numero > 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }

    return inverso;
}

// DONE 6
int inverterNumeroRecursivo(int numero, int invertido) {
    if (numero == 0) {
        return invertido;
    } else {
        int resto = numero % 10;
        invertido = (invertido * 10) + resto;
        return inverterNumeroRecursivo(numero / 10, invertido);
    }
}

int main () {
    int numero, numeroInvertido;
    printf("Digite um número para ser invertido: ");
    scanf("%d", &numero);

    numeroInvertido = inverterNumeroNaoRecursivo(numero);
    printf("Número invertido usando recursividadee: %d\n", numeroInvertido);

    numeroInvertido = inverterNumeroRecursivo(numero, 0);
    printf("Número invertido sem usar recursividade: %d\n", numeroInvertido);
    return 0;
}