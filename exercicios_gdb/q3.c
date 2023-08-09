#include <stdio.h>

void triplosPitagoricos(int max)
{
    int cateto1, cateto2, hipotenusa;
    for (cateto1 = 1; cateto1 <= max; cateto1++)
    {
        for (cateto2 = cateto1; cateto2 <= max; cateto2++)
        {
            for (hipotenusa = cateto2; hipotenusa <= max; hipotenusa++)
            {
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa)
                {
                    printf("%d %d %d\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
}

int main()
{
    triplosPitagoricos(50);
    return 0;
}
