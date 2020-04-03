#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int i, resultado,num;

   
    for (i = 1; i <= 500; i++)
    {
        if(i %2 ==0)
        resultado = i+i;
        printf("\n A soma dos numeros pares %d ",resultado);
    }

    return 0;
}

void br()
{
    printf("\n");
}