#include <stdio.h>
#include <stdlib.h>


int main()
{
    int qtd, i;
   
    float *compras,soma;
    printf("Quantos itens voce deseja comprar?\n\n");
    scanf("%i", &qtd);

    compras = malloc(qtd * sizeof(float));
    printf("Informe o valor que cada um dos itens:\n");
    for (i = 0; i < qtd; i++)
    {
        printf("\nItem %i:", i + 1);
        scanf("%f", &compras[i]);
        soma += compras[i];
    }
    printf("\n\n\n");
    printf("Mostrando os itens e seus valores:\n\n");

    for (i = 0; i < qtd; i++)
    {
        printf("\nItem %i: %.2f", i + 1, compras[i]);
    }
    printf("\n\nTotal das compras: %.2f", soma);
    free(compras);
    return 0;
}