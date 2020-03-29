#include <stdio.h>
#include <stdlib.h>

int main (int arg, char*args[])
{
	float salario;
	float desconto;
	float sal_liquido; 
	
	printf("digite o valor do salario: ");
	fflush(stdin);
	scanf("%f", &salario);
	
	if (salario >= 1499.16)
	{
		
		desconto = (salario * 7.5) / 100;
		sal_liquido = salario - desconto;
		
		printf("\nsalario digitado foi: %.2f", salario);
		printf("\nvalor do desconto foi de: %.2f", desconto);
		printf("\nO salario liquido sera de: %.f", sal_liquido);
		
	}
	
	system("pause >> null");
	
	return 0;
}
