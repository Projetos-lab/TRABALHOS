#include <stdio.h>

int converte_temp( float temp ) {

  int converte;

  converte = (temp - 32) / 1.8;

  return converte;

}

int main() {

  float temp, celsius_temp;

  printf("Digite uma temperatura em graus Fahrenheit: ");
  scanf("%f", &temp);

  celsius_temp = converte_temp(temp);

  printf("Convertendo %.2f Fahrenheit para Celsius e : %.2f", temp, celsius_temp);

  return 0;

}