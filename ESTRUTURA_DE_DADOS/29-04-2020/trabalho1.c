/*
Escreva um programa que leia a placa e a
quilometragem rodada dos carros de uma frota de 30
veículos. Grave estas informações em um arquivo
texto*/

#include <stdio.h>
#define TAM 5
int main()
{
    char placa[8];
    float km;
    int i;

    FILE *arq;

    arq = fopen("carros.txt", "a+");

    for (i = 0; i < TAM; i++)
    {
        printf("Entre com a placa do carro");
        gets(placa);
        printf("Qual a kilometragem: ");
        scanf("%f", &km);
        getchar();
        fprintf(arq, "%s %f\n", placa, km);
    }
    fclose(arq);
    return 0;
}

