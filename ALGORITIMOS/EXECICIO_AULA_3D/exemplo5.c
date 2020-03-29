#include <stdio.h>
#include <stdlib.h>

int main (int arg, char*args[]) 
{
	float nota;
	
	printf("digite uma nota de 0 a 10: ");
	fflush(stdin);
	scanf("%f", &nota); 
	
	
	if ((nota >= (float)0) && (nota <= (float)3.4))
	printf("\naluno de reprovado");
	else if ((nota >= (float)3.5) && (nota <= (float)4.9))
	printf("\naluno de recuperacao");
	else if ((nota >= (float)5.0) && (nota <= (float)10.0))
	{
		printf("\naluno aprovado");
		if (nota == (float)10.0)
		{
			printf("\natingiu a nota maxima");
		}
	}
	else
	 printf("\nnota invalida");
	 
	 system("pause>>null");
	 
	 return 0;
}
