#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int i;
    float salario;
    for (i = 0; i <= 10; i++)
    {
        printf("\nDigite salario do funcionario %d: ", i + 1);
        scanf("%f", &salario);

        if (i==3)
        {
            br();
            printf("Saiu do laço antes de completar 9");
            break;
        }
        
    }

    return 0;
}

void br()
{
    printf("\n");
}