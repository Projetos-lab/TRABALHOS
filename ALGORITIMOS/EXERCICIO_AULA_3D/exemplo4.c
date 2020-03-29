#include <stdio.h>
#include <stdlib.h>

int main (int arg, char*args[])
{
	char *nome;
	char *hoje;
	
	nome ="anchieta";
	hoje ="terca";
	
	if ((strlen(nome) <100) && (hoje =="segunda"))
	{
		
		printf("nome e: %s\n", nome);
		printf("hoje e: segunda\n");
	}
	else if ((strlen(nome) <100) && (hoje == "terca"))
	{
		printf("nome e: %s\n", nome);
		printf("hoje e: terca\n");
	}
	
	else 
		printf("dia da semana nao e segunda nem terca");
		
		system("pause >> null");
		
		return 0;
}
