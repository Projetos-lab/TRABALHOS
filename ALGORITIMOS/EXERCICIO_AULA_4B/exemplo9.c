#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int i;
    float salario;
    for (i = 0; i <= 10; i++)
    {
        printf("\nValor de i e:%d na linha:%d: ", i, i + 1);
        scanf("%f", &salario);

        if (i == 5)
        {
            continue;
        printf("Quando i for  = a, esta linha nao será execultada");
        }
    }

    return 0;
}

void br()
{
    printf("\n");
}