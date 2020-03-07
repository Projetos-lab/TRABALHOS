#include <stdio.h>
#include <stdlib.h>

int main() {

  int ra[10], buscaRA, c, i;
  char r;
  float nota[10];

  printf("|=======================|\n");
  printf("|  Cadastro de alunos   |\n");
  printf("|=======================|\n");

  for ( c=0; c<5; c++ ) {
    printf("Qual o RA do aluno: ");
    scanf("%i", &ra[c]);
    printf("Qual a nota do aluno: ");
    scanf("%f", &nota[c]);
  }

  printf("|=======================|\n");

  printf("Digite o RA do aluno: ");
  scanf("%i", &buscaRA);
  for ( i=0; i<10; i++ ) {
    if ( ra[i] == buscaRA ) {
      printf("Aluno de RA: %i\n", ra[i]);
      printf("Nota: %.2f\n", nota[i]);
    }
  }
  printf("|=======================|\n");

  getch();
  return 0;

}

