#include <stdio.h>

int main()
{
    float RAIO, ALTURA, VOLUME;

    printf("Entre com o raio da lata: \n");
    scanf("%f", &RAIO);
    printf("Entre com a altura da lata: \n");
    scanf("%f", &ALTURA);

    VOLUME = (3.14159 * (RAIO * RAIO)) * ALTURA;

    printf("O volume da lata e: %f", VOLUME);

    return 0;
}