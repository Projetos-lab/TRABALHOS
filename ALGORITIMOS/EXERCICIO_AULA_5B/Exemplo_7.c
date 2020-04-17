#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetor[10];
	int i;
	
	srand(time(NULL));
	
	for (i=0; i<10; i++)
	{
		vetor[i] = rand() % 100;
	}
	
	for (i=0; i<10; i++)
	{
		printf("\nPosicao vetor[%d] = %d", i, vetor[i]);
	}
	
	system("Pause >> null");
	return 0;
}
