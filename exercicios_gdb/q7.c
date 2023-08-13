#include <stdio.h>

int Ffunction(int m, int n){
    if (n == 1) {
        return m + 1;
    } else if (m == 1) {
        return n + 1;
    } else {
        return Ffunction(m, n - 1) + Ffunction(m - 1, n);
    }

    return 0;  
}

int main () {
    int m, n, resultado = 0;

    printf("Digite um valor para m: ");
    scanf("%d", &m);

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    resultado = Ffunction(m,n);

    printf("Resultado: %d\n", resultado);
    return 0;
}