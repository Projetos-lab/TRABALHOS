#include <stdio.h>

int main()
{
    float C, F;

    printf("Entre com uma temperatura qualquer em graus Celsius: \n");
    scanf("%f",&C);

    F = ((9* C) + 160) / 5;

    printf("O resultado da conversão de Celsius para Fahrenheit e: %f",F);

    return 0;
}   