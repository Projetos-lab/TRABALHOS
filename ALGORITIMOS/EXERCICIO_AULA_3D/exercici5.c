#include <stdio.h>
#include <stdlib.h>

int main (int arg, char*args[])
{
	float a,b,c,aux;
	
	printf("primeiro numero: ");
	scanf("%f", &a);
	
	printf("segundo numero: ");
	scanf("%f", &b);
	
	printf("terceiro numero: ");
	scanf("%f",&c);
	
	if (a > b) {
		aux = a;
		a = b;
		b = aux;
	}
	else if (a > c) {
		aux = a;
		a = c;
		c = aux;
	}
	else if (b > c) {
		aux = c; 
		c = b;
		b = aux;
	}
	
	printf("os valores em ordem crescente eh: %.2f %.2f %.2f", a,b,c);
	system("pause>>null");
	
	return 0;
}
