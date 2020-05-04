#include <stdio.h>
#include <stdlib.h>

char* inverte( char *numeros ) {

  int i, j, aux;

  for (i=0; i < 4; i++) {
    j=8-i-1;
    aux = numeros[i];
    numeros[i] = numeros[j];
    numeros[j] = aux;
  }

  return numeros;

}

int main () {

  char numeros[8] = {1, 2, 3, 4, 5, 6, 7, 8}, *line;
  int i;

  line = inverte(numeros);

  for (i=0; i<8; ++i) {
    printf("%i ", line[i]);
  }

  printf("\n");

  return 0;
}