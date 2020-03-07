#include <stdio.h>
#include <stdlib.h>

// Lista A Ex 3

int main () {

    float temp, f;

    printf("Digite uma temperatura em Celsius:");
    scanf("%f", &temp);

    f = 1.8 * temp + 32;

    printf("Convertendo %.2f para Fahrenheit = %.2f ", temp, f);

    return 0;
}
