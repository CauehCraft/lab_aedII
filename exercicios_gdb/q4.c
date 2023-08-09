#include <stdio.h>

int isPerfect(int num)
{
    int soma = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma += i;
        }
    }
    return soma == num;
}

void imprimirFatores(int num)
{
    printf("1");
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf(" + %d", i);
        }
    }
    printf("\n");
}

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        if (isPerfect(i))
        {
            printf("%d = ", i);
            imprimirFatores(i);
        }
    }
    return 0;
}
