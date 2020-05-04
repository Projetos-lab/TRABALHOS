#include <stdio.h>

int converte_temp( float temp ) {

  int converte;

  converte = (temp * 1.8) + 32;

  return converte;

}

int main() {

  float temp, fahrenheit_temp;

  printf("Digite uma temperatura em graus Celsius: ");
  scanf("%f", &temp);

  fahrenheit_temp = converte_temp(temp);

  printf("Convertendo %.2f Celsius para Fahrenheit e : %.2f", temp, fahrenheit_temp);

  return 0;

}