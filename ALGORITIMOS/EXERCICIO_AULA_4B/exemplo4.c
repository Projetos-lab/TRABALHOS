#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int i, qtd;
    float media, nota, ac_notas;

    printf("\nDigite a quantidade de medias a serem calculadas: ");
    fflush(stdin);
    scanf("%d", &qtd);

    i = 0;
    ac_notas = 0;

    while (i <= qtd)
    {
        printf("digite nota: %d",i);
        fflush(stdin);
        scanf("%f", &nota);
        ac_notas += nota;
        i++;
    }
    
    media = ac_notas/qtd;
    printf("\nQuantidade de notas digitadas: %d",qtd);
    printf("\nNotas Acumuladas: %.2f", ac_notas);
    printf("\nMedia das notas: %.2f",media);

    system("pause >> null");


    return 0;
}

void br()
{
    printf("\n");
}