#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota[5] = 10;
	float soma, media;
	int i, qtde;
	char resp;
	
	i = 0;
	do{
		printf("\nDigite nota %d na posicao [%d] do vetor: ", i+1, i);
		scanf("%f", &nota[i]);
		i++;
		qtde = i;
		
		if (i == 5)
			break;
		
		printf("\nDeseja continuar? (S/N): ");
		fflush(stdin);
		scanf("%c", &resp);
		resp = toupper(resp);
 	}while(resp == 'S');
 	
 	printf("\nValores do vetor");
 	for (i=0; i<5; i++)
 		printf("\nPosicao[%d] com valor:[%f]", i, nota[i]);
 		
 	i = 0, soma = 0;
 	do{
 		soma += nota[i];
 		i++
	 }while(i <= 4);
	 
	 media = soma / qtde;
	 
	 printf("\n\nSoma das idades: %f", soma);
	 printf("\n\nMedia das idades: %f", media);
	 
	 system("Pause >> null");
	 return 0;
}
