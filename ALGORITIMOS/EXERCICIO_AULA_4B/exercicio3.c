#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int soma, i;

    for (i = 1; i <= 100; i++)
    {
        soma += i;
        printf("\n A soma dos numeros de 1 a 100: %d", soma);
    }

    return 0;
}

void br()
{
    printf("\n");
}