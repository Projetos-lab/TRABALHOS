#include <stdio.h>
#include <math.h>

int duracao( int hora_ini, int min_ini, int hora_end, int min_end ) { 

  int dura_ini, dura_end, duracao;

  hora_ini = hora_ini * 60;
  hora_end = hora_end * 60;
  
  dura_ini = hora_ini + min_ini;
  dura_end = hora_end + min_end;

  duracao = dura_end - dura_ini;

  if ( dura_end < dura_ini || dura_end >= 1440 || dura_end == 0 ) {
    printf("O jogo tem que terminar no mesmo dia que comecou!");
    return 9999;
  } else if ( duracao > 720 ) {
    printf("O jogo tem que ter menos de 12 horas!");
    return 9999;
  } else {
    return duracao;
  }

}

int main() {

  int hora_ini, min_ini, hora_end, min_end, dura;

  printf("Digite a hora de inicio do jogo: ");
  scanf("%d", &hora_ini);

  printf("Digite os minutos de inicio do jogo: ");
  scanf("%d", &min_ini);

  printf("Digite a hora que o jogo acaba: ");
  scanf("%d", &hora_end);

  printf("Digite os minutos que o jogo acaba: ");
  scanf("%d", &min_end);

  dura = duracao(hora_ini, min_ini, hora_end, min_end);

  if ( dura != 9999 ) {
    printf("O jogo tem a duracao de %d minutos", dura);
  }

  return 0;

}