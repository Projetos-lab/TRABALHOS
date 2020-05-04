#include <stdio.h>

int menu() {

  int opc;

  printf("|-------------|\n");
  printf("| [1]programa |\n");
  printf("| [2]sair     |\n");
  printf("|-------------|\n");
  printf("| Escolha uma opc: ");
  scanf("%d", &opc);

  return opc;
}

int main() {

  int opc, num, aux, bin[8];

  opc = menu();

  if ( opc == 1 ) {

    printf("Digite o numero inteiro para ser convertido: ");
    scanf("%d", &num);

    for (aux = 7; aux >= 0; aux--) {
      if (num % 2 == 0)
        bin[aux] = 0;
      else
        bin[aux] = 1;
      num = num / 2;
    }

    for (aux = 0; aux < 8; aux++)
      printf("%d", bin[aux]);

    menu();

  } else {

    //infelizmente system("cls") encerra o programa
    system("cls");

  }

  return 0;

}

