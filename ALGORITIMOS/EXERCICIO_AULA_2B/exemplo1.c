#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int main(int arg, char *args[])
{
    int idade;
    int dia, mes, ano;
    float salario;

    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("digite uma data no formato dd/mm/aaaa: \n");
    scanf("%d %*c %d %*c %d", &dia, &mes, &ano);

    printf("digite o valor do salario: \n");
    scanf("%f", &salario);

    printf("\n\n");
    printf("O valor da sua idade é: %d\n", idade);
    printf("A data digitada foi: %d/%d/%d\n", dia, mes, ano);
    printf("O salario digitado foi : %.2f\n", salario);

    system("pause >> null");

    return 0;
}