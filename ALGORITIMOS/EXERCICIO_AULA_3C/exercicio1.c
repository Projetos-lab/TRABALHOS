#include <stdio.h>

int main (int arg, char*args[]) {

int n1, n2,dif;

	printf("Entre com um numero inteiro qualquer: ");
	scanf("%d",&n1);
	
	printf("Entre com outro numero inteiro qualquer: ");
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
