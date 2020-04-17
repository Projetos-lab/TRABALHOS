/*
	declaracao de 1 vetor de 5 posicoes,
*/
#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * args)
{
	//declaracao de variaveis
	int idade[5];
	
	//mostrando o valor dos vetores sem inicializacao
	//de valores
	printf("Criacao do vetor sem inicializacao");
	printf("\nValor da posicao %d do vetor: [%d]", 0, idade[0]);
	printf("\nValor da posicao %d do vetor: [%d]", 1, idade[1]);
	printf("\nValor da posicao %d do vetor: [%d]", 2, idade[2]);
	printf("\nValor da posicao %d do vetor: [%d]", 3, idade[3]);
	printf("\nValor da posicao %d do vetor: [%d]", 4, idade[4]);
	system("PAUSE >> null");
	
	//colocando zero nas posicoes do vetor
	printf("\n\n'Zerando\' as posicoes do vetor");
	idade [0] = 0;
	idade [1] = 1;
	idade [2] = 2;
	idade [3] = 3;
	idade [4] = 4;
	system("PAUSE >> null");
	
	//Mostrando as posicoes do vetor "zeradas"
	printf("\n\nVetor com inicializacao nas posicoes");
	printf("\nValor na Posicao %d do vetor: [%d]", 0, idade[0]);
	printf("\nValor na Posicao %d do vetor: [%d]", 1, idade[1]);
	printf("\nValor na Posicao %d do vetor: [%d]", 2, idade[2]);
	printf("\nValor na Posicao %d do vetor: [%d]", 3, idade[3]);
	printf("\nValor na Posicao %d do vetor: [%d]", 4, idade[4]);
	system("PAUSE >> null");
	
	return 0;
}
