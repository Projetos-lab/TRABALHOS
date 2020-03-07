#include <stdio.h>
#include <stdlib.h>

float operacao( float valor , float valor2 , int opc ) {

  float resultado;

  switch ( opc ) {
  case 1:
    resultado = valor + valor2;
  break;
  case 2:
    resultado = valor - valor2;
  break;
  case 3:
    resultado = valor * valor2;
  break;
  case 4:
    resultado = valor / valor2;
  break;
  default:
    resultado = 777;
  }

  return resultado;
}

void main(){

  int opc;
  float valor, valor2;

  printf("|===============|\n");
  printf("|  Calculadora  |\n");
  printf("|===============|\n");
  printf("|Escolha uma opc|\n");
  printf("|---------------|\n");
  printf("| [1] Soma      |\n");
  printf("| [2] Subtracao |\n");
  printf("| [3] Multip.   |\n");
  printf("| [4] Divisao   |\n");
  printf("| [5] Sair      |\n");
  printf("|===============|\n");

  while ( 1 ) {

    printf("| Opc: ");
    scanf("%i", &opc);

    if ( opc == 5 ) {
      break;
    } else {

    printf("| 1°valor: ");
    scanf("%f", &valor);
    printf("| 2°valor: ");
    scanf("%f", &valor2);

    printf("Resultado: %.2f\n", operacao(valor, valor2, opc));
    }
  }

  getch();
  return 0;
}
