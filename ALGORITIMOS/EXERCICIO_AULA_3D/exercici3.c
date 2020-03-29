#include <stdio.h>

int main (int arg, char*args[])
{
	float n1,n2,n3,n4,media;
	
	printf("primeira nota: ");
	scanf("%f", &n1);
	
	printf("segunda nota: ");
	scanf("%f", &n2);
	
	printf("terceira nota: ");
	scanf("%f", &n3);
	
	printf("quarta nota: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4)/4;
	
		if (media >= 5) {
			printf("aprovado\n");
		}
		else{
		printf("reprovado\n");
	}
	
	printf("media final do aluno eh %.2f", media);
	
	system("pause >> null");
	return 0;
		
}
