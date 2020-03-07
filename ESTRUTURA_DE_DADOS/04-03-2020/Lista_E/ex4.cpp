#include <stdio.h>
#include <stdlib.h>

int soma( int* vetor ) {

  int c, resultado;

  resultado = 0;

  for ( c=0; c<7; c++ ) {
    resultado = resultado + vetor[c];
  }

  return resultado;
}

int main () {

  int v[7];
  int c, a;

  for ( c=0; c<7; c++ ){

    printf("Digite um numero:");
    scanf("%i", &v[c]);
  }

  for ( a=0; a<7; a++ ){

    printf("%i ", v[a]);
  }

  printf("Soma: %i", soma(v));


  getch();
  return 0;
}
