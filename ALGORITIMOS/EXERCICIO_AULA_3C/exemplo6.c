#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main ( int arg, char*args[])
{
	
	char sexo;
	
	printf("digite [M] para masculino ou [F] para feminino: ");
	fflush(stdin);
	scanf("%c", &sexo);
	
	toupper(sexo);
	
	sexo = 'M' ? printf("\nmasculino") : printf("\nfeminino");
	
	system("pause >> null");
	return 0;
}
