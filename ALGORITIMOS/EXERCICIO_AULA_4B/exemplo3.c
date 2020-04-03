#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int i, qtd;

    printf("\nDigite a quantidade de vezes que o loop deve execultar: ");
    fflush(stdin);
    scanf("%i", &qtd);

    i = 0;
    do
    {
        br();
        printf("Teste de laco: %d", i);
    } while (i <= qtd);

    printf("\nSaiu do laço");
    return 0;
}

void br()
{
    printf("\n");
}