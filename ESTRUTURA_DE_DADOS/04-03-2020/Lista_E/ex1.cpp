#include <stdio.h>
#include <stdlib.h>

int sub(int num1, int num2) {

  int resultado;

  resultado = num1 - num2;

  return resultado;
}

int main() {

  int num1, num2, resultado;

  printf("Digite um numero:");
  scanf("%i", &num1);
  printf("Digite um numero:");
  scanf("%i", &num2);

  resultado = sub(num1, num2);

  printf("Resultado: %i", resultado);

  getch();
  return 0;

}
