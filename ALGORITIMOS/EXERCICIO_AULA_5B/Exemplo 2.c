/*
	Faz a soma de 5 idades utilizando vetor,
	posicao a posicao do vetor
*/
#include <stdio.h>
#include <stdlib.h>

int main(int arg, char*args)
{
	//declaracao de variaveis
	int idade[5];
	int soma;
	
	//entrada
	printf("Digite a idade 1 de 5: ");
	scanf("%d", &idade[0]);
	printf("Digite a idade 2 de 5: ");
	scanf("%d", &idade[1]);
	printf("Digite a idade 3 de 5: ");
	scanf("%d", &idade[2]);
	printf("Digite a idade 4 de 5: ");
	scanf("%d", &idade[3]);
	printf("Digite a idade 5 de 5: ");
	scanf("%d", &idade[4]);
	
	//processamento
	soma = idade[0] + idade[1] + idade[2] + idade[3] + idade[4];
	
	//saida
	printf("\nSoma das idades: %d", soma);
	
	system("PAUSE >> null");
	
	return 0;
}
