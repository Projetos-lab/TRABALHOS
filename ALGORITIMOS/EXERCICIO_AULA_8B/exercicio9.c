#include <stdio.h>
#include <math.h>

int dias( int ano, int mes ) {

  int bissexto, dias = 31;

  if ( (ano % 400) == 0 ) {
    bissexto = 1;
  } else {
    if ( (ano % 4) == 0 && (ano % 100) != 0) {
      bissexto = 1;
    } else {
      bissexto = 0;
    }
  }

  switch( mes ) {
    case 2:
      dias = (dias - 2) + bissexto;

    case 4: case 6: case 9: case 11:
      dias--;
  }

  return dias;

}

int main() {

  int ano, mes, dia;
  printf("Digite um ano: ");
  scanf("%d", &ano);

  printf("Digite um mes, compriendido 1 ~ 12: ");
  scanf("%d", &mes);

  dia = dias(ano, mes);

  printf("O mes %d, do ano %d teve %d dias", mes, ano, dia);
  return 0;

}