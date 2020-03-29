#include <stdio.h>

int main (int arg, char*args[])
{
	
	int n;
	
	printf("Entre com um numero inteiro qualquer: ");
	scanf("%i", &n);
	
	if (n < 0) {
		n = n *(-1);
	}
	
	printf("o modulo do valor fornecido e %i\n", n) ;
	
	system ("pause >>null");
	return 0;
}
