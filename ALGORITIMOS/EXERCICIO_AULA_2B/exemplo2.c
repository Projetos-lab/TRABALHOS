#include <stdio.h>

int main(int arg, char *args[])
{
    int ano_atual;
    int ano_nasc;
    int idade;

    printf("Progama calcula idade pessoa: \n\n");

    printf("informe ano atual:   \n");
    scanf("%d", &ano_atual);
    printf("informe ano de nascimento:   \n");
    scanf("%d", &ano_nasc);

    idade  = ano_atual - ano_nasc;
    

    printf("\n\n");
    printf("Voce tem %d anos.\n", idade);


    getch();

    return 0;
}