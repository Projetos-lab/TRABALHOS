#include <stdio.h>
#include <stdlib.h>

int main() {

  char v[5][15] = {"produto","produto2","produto3","produto4","produto5"};
  int v2[5], c, i, total;

  total = 0;
  printf("Digite o valor dos produtos: ");

  for ( c=0; c<5; c++ ) {

    scanf("%i", &v2[c]);
    if (c!=4)
      printf("proximo: ");
  }
  printf("|=====================|\n");

  for ( i=0; i<5; i++ ) {
    printf("%s: %i\n", v[i], v2[i]);
    total = total + v2[i];
  }
  printf("Total: %i", total);

  getch();
  return 0;
}
