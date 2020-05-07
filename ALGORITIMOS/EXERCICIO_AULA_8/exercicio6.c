#include <stdio.h>
#include <math.h>

float raiz_quadrada( float num ) {

  float result;

  result = sqrt(num);

  return result;

}

int main() {

  float num;

  printf("Digite um numero: ");
  scanf("%f", &num);

  printf("A reaiz de %.2f e igual a: %.2f", num, raiz_quadrada(num));

  return 0;

}