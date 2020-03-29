#include <stdio.h>
#include <stdlib.h>

int main (int arg, char*args[])
{
	
	char sexo; 
	
	printf("digite [m] para masculino ou [f] para feminino: ");
	fflush(stdin);
	scanf("%c", &sexo); 
	
	if ((sexo =='m') || (sexo == 'M'))
		printf("\nmasculino");
		else 
		printf("\nfeminino");
		
		system("pause>>null");
		
		return 0;
}
