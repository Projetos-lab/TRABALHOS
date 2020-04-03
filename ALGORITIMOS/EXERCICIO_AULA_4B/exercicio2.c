#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int i, resultado,num;

    printf("Entre com um inteiro positivo qualquer: ");
    br();
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        resultado = num * i;
        printf("\n%d X %d = %d ", num, i,resultado);
    }

    return 0;
}

void br()
{
    printf("\n");
}