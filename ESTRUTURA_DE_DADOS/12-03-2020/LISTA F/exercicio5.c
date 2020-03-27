#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[101];
    float altura;
    float peso;
} Corpo;

typedef struct // resposta C
{
    //Corpo fichas[2]; //criando "fichas para utilização" lembre-se de falar qual deseja preeencher!

    Corpo membro1; // resposta D
    Corpo membro2; // resposta D
} Casais[10];

int main()
{
    Corpo p1; // resposta A
    Casais p2;
    p1.altura = 1.68; // resposta B
    // respondendo E

    //Toinho
    strcpy(p2[5].membro1.nome, "Antonio Pegatudo");
    p2[5].membro1.peso = 80;
    p2[5].membro1.altura = 1.80;

    //Tiana
    strcpy(p2[5].membro2.nome, "Sebastiana Pulabrejo");
    p2[5].membro2.peso = 65;
    p2[5].membro2.altura = 1.55;

    //    printf("%s\n",p2[5].membro2.nome);
    //    printf("%f\n",p2[5].membro2.peso);
    //    printf("%f\n\n",p2[5].membro2.altura);
    //    printf("%s\n",p2[5].membro1.nome);
    //    printf("%f\n",p2[5].membro1.peso);
    //    printf("%f\n",p2[5].membro1.altura);

    return 0;
}