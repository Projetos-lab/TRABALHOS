#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[10];
	int i, soma;
	float media;
	
	for(i=0; i<10; i++)
	{
		printf("Digite a idade %d: ", i+1);
		scanf("%d", &idade[i]);
	}
	
	soma = 0;
	for(i=0; i<10; i++)
	{
		soma += idade[i];
	}
	
	media = soma / 10;
	printf("\nMedia das idades: %.2f", media);
	
	system("Pause >> null");
	return 0;
}
