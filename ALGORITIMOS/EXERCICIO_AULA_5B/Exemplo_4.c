#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[5];
	int i, soma;
	
	for(i=0; i<=4; i++)
	{
		printf("Digite a idade %d de 5: ", i+1);
		scanf("%d", &idade[i]);
	}
	
	soma = 0;
	
	for(i=0; i<=4; i++)
	{
		soma += idade[i];
	}
	printf("\nSoma das idades: %d", soma);
	
	system("Pause >> null");
	
	return 0;
}
