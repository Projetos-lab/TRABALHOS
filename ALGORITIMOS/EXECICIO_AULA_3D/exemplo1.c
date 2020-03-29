#include <stdio.h>
int main(int arg, char * args[])
{
	
	int nota;
	
	printf("digite um valor inteiro de 0 a 10: ");
	fflush(stdin);
	scanf("%d", &nota);
	
	if (nota >= 5)
		printf("\nAluno aprovado");
		
		system ("pause >> null");
		
		return 0;
}
