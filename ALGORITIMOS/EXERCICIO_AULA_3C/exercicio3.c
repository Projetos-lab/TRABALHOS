#include <stdio.h>

int main (int arg, char*args[])
{
	float n1,n2,n3,n4,media;
	
	printf(" Entre primeira nota: ");
	scanf("%f", &n1);
	
	printf("Entre segunda nota: ");
	scanf("%f", &n2);
	
	printf("Entre terceira nota: ");
	scanf("%f", &n3);
	
	printf(" Entre quarta nota: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4)/4;
	
		if (media >= 5) {
			printf(" Aluno aprovado\n");
		}
		else{
		printf(" Aluno reprovado\n");
	}
	
	printf("Media final do aluno eh %.2f", media);
	
	system("pause >> null");
	return 0;
		
}
