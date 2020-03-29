#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int arg,char*args[])
{
	char letra;
	
	printf ("\n[A] - data do sistema operacional");
		printf ("\n[B] - hora do sistema operacional");
			printf ("\n[C] - lista arquivos no diretorio corrente");
				printf ("\n\ndigite a letra do comando a ser executado: ");
				
				fflush(stdin);
				scanf("%c", &letra); 
				letra = toupper(letra);
				
				switch (letra)
				{
					case 'A': system("date");
						break;
						case 'B': system("time");
							break;
							case'C': system("dir");
								break;
								default: printf("\ncomando invalido");
				}
				
				system("pause>>null");
				return 0;
}
