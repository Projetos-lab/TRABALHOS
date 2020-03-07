#include <stdio.h>
#include <stdlib.h>

void alterarString(char* lista) {

  int x, len;

  len=strlen(lista);

  for ( x=len-1; x>=0; x-- ){
    printf("%c",lista[x]);
  }
}

int main() {
  int x,len;
  char lista[30];

  printf("Digite uma palavra: ");
  gets(lista);

  alterarString(lista);

  getch();
  return 0;
}
