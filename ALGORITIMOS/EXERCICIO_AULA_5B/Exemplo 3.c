/*
	declaracao de vetores de 5 posicoes, com inicializacao
*/
#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * args)
{
	//declaracao de um vetor inteiro
	//incializando todas as posicoes com 0
	int vetorA[5] = {0};
	
	//mostrando o valor dos vetores sem inicializacao
	//de valores
	printf("Criacao de um vetor inteiro, com valores 0 da posicao 0");
	printf("\nValor na Posicao %d do vetor: [%d]", 0, vetorA[0]);
	printf("\nValor na Posicao %d do vetor: [%d]", 1, vetorA[1]);
	printf("\nValor na Posicao %d do vetor: [%d]", 2, vetorA[2]);
	printf("\nValor na Posicao %d do vetor: [%d]", 3, vetorA[3]);
	printf("\nValor na Posicao %d do vetor: [%d]", 4, vetorA[4]);
	system ("PAUSE >> null");
	
	//declaracao de um vetor inteiro,
	//inicializando todas as posicoes com com outros valores
	int vetorB[5] = {4, 8974, 223, 34, 987};
	printf("\n\nCriacao de um vetor inteiro com outros valores");
	printf("\nValor na Posicao %d do vetor: [%d]", 0, vetorB[0]);
	printf("\nValor na Posicao %d do vetor: [%d]", 1, vetorB[1]);
	printf("\nValor na Posicao %d do vetor: [%d]", 2, vetorB[2]);
	printf("\nValor na Posicao %d do vetor: [%d]", 3, vetorB[3]);
	printf("\nValor na Posicao %d do vetor: [%d]", 4, vetorB[4]);
	system("PAUSE >> null");
	
	//declaracao de um vetor float,
	//inicializando todas as posicoes com outros valores
	float vetorC[5] = {33.234, 22.1, 8989.453, 34.9, 1};
	printf("\n\nCriacao de um vetor float com outros valores");
	printf("\nValor na Posicao %d do vetor: [%f]", 0, vetorC[0]);
	printf("\nValor na Posicao %d do vetor: [%f]", 1, vetorC[1]);
	printf("\nValor na Posicao %d do vetor: [%f]", 2, vetorC[2]);
	printf("\nValor na Posicao %d do vetor: [%f]", 3, vetorC[3]);
	printf("\nValor na Posicao %d do vetor: [%f]", 4, vetorC[4]);
	system("PAUSE >> null");
	
	//declaracao de um vetor char,
	//inicializando todas as posicoes com com outros valores
	char vetorD[5] = {'Z', 'b', '*', '1', '?'};
	printf("\n\nCeiacao de um vetor char com outros valores");
	printf("\nValor na Posicao %d do vetor: [%c]", 0, vetorD[0]);
	printf("\nValor na Posicao %d do vetor: [%c]", 1, vetorD[1]);
	printf("\nValor na Posicao %d do vetor: [%c]", 2, vetorD[2]);
	printf("\nValor na Posicao %d do vetor: [%c]", 3, vetorD[3]);
	printf("\nValor na Posicao %d do vetor: [%c]", 4, vetorD[4]);
	system("PAUSE >> null");
	
	return 0;
}

