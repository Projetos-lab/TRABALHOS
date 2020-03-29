#include <stdio.h>

int main (int arg, char*args[])
{
	
	int n;
	
	printf("escreva um numero inteiro: ");
	scanf("%i", &n);
	
	if (n < 0) {
		n = n *(-1);
	}
	
	printf("o modulo do valor fornecido eh %i\n", n) ;
	
	system ("pause >>null");
	return 0;
}
