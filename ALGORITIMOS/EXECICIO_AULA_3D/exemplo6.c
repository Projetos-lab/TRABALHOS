#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main ( int arg, char*args[])
{
	
	char sexo;
	
	printf("digite [m] para masculino ou [f] para feminino: ");
	fflush(stdin);
	scanf("%c", &sexo);
	
	toupper(sexo);
	
	sexo = 'm' ? printf("\nmasculino") : printf("\nfeminino");
	
	system("pause >> null");
	return 0;
}
