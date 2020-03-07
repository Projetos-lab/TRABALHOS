#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char letras[30], v[]="aeiou";
  int c, i, len;

  printf("Digite: ");
  gets(letras);

  len = strlen(letras);

  for ( c=0; c<len; c++ ) {
    for ( i=0; i<5; i++ ) {
      if ( letras[c] == v[i] ) {
        printf("?");
      }
      if ( i==4 && letras[c]!=v[0] && letras[c]!=v[1] && letras[c]!=v[2] && letras[c]!=v[3] && letras[c]!=v[4]) {
        printf("%c", letras[c]);
      }
    }
  }

}
