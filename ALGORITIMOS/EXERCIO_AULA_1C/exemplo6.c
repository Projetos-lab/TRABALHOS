#include <stdio.h>

int main(int arc, char *args[]){

    //declaração de variaveis 

    int valor1, valor2;
    int soma; int subt;
    int mult; float divi;
    int resto;
    

    valor1 = 10;
    valor2 = 5;

    soma = valor1 + valor2;
    mult = valor1 * valor2;
    divi  = valor1 / valor2;
    resto = valor1 % valor2;

    printf("Valor de soma: %d\n", soma);
    printf("Valor de subt: %d\n", subt);
    printf("Valor de mult: %d\n", mult);
    printf("Valor de divi: %.2f\n", divi);
    printf("Valor de resto: %d\n", resto);
    
    system("pause");
    return 0;
}