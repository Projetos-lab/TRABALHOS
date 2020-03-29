#include <stdio.h>

int main (int arg, char*args[]) {

int n1, n2,dif;

	printf("escreva um numero inteiro: ");
	scanf("%d",&n1);
	
	printf("escreva outro numero inteiro: ");
	scanf("%d", &n2);
	
		if (n1 > n2) { 
			dif = n1 - n2;
		}
		else {
			dif = n2 - n1;
		}
		
		printf("a diferenca do maior numero pelo meno numero do valor fornecido eh %d\n", dif);
		
		system("pause>>null");
		
		return 0;
	}
