#include <stdio.h>

// DONE 1
void converterImprimirEmASCII() {
    int count = 0;

    for (int i = 0; i <= 127; ++i) {
        printf("%d: %c  ", i, (char)i);
        count++;

        if (count == 10) {
            printf("\n");
            count = 0;
        }
    }

    printf("\n");
}


int main() {
    converterImprimirEmASCII();
    return 0;
}
