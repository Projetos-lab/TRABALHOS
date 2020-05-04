#include <stdio.h>

int area_triangulo() {

  int base, altura, area;

  printf("Tamanho da base do triangulo: ");
  scanf("%d", &base);

  printf("Tamanho da altura do triangulo: ");
  scanf("%d", &altura);

  area = base * altura;

  return area;

}

int main() {

  printf("%d", area_triangulo());

  return 0;

}