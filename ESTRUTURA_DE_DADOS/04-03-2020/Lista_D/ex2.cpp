#include <stdio.h>
#include <stdlib.h>

int main () {

  int v[7];
  int c, a, soma;

  soma = 0;


  for ( c=0; c<7; c++ ){

    printf("Digite um numero:");
    scanf("%i", &v[c]);
  }

  for ( a=0; a<7; a++ ){

    printf("%i ", v[a]);
    soma = soma + v[a];
  }

  printf("Soma: %i", soma);


  getch();
  return 0;
}

