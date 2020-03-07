#include <stdio.h>
#include <stdlib.h>
int valorTotal( int* vetor ) {

  int c, total = 0;

  for ( c=0; c<5; c++ ) {
    total += vetor[c];
  }
  return total;
}

int main() {

  char v[5][15] = {"produto","produto2","produto3","produto4","produto5"};
  int v2[5], c, i;

  printf("Digite o valor dos produtos: ");

  for ( c=0; c<5; c++ ) {

    scanf("%i", &v2[c]);
    if (c!=4)
      printf("proximo: ");
  }
  printf("|======================|\n");
  printf("Valor total: %i", valorTotal(v2));

  return 0;
}

