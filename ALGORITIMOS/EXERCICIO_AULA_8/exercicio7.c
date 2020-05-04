#include <stdio.h>
#include <math.h>

int bissexto( int ano ) {

  if ( (ano % 400) == 0 ) {
    return 1;
  } else {
    if ( (ano % 4) == 0 && (ano % 100) != 0) {
      return 1;
    } else {
      return 0;
    }
  }

}

int main() {

  int ano;

  printf("Digite um ano: ");
  scanf("%d", &ano);

  if ( bissexto(ano) == 1 ) {
    printf("O ano e bissexto");
  } else {
    printf("O ano nao e bissexto");
  }

  return 0;

}