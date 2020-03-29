#include <stdio.h>
#include <stdlib.h>

int main (int arg, char*args[])
{
	
	int numero;
	int resto;
	
	
	printf ("digite um numero inteiro entre 0 e 10: ");
	fflush(stdin);
	scanf("%d", &numero);
	
	resto =numero %2;
	
	resto == 0 ?
		printf("\n%d eh um numero par", numero):
		printf("\n%d eh um numero impar", numero);
		
		system("pause>>null");
		
		return 0;
}
