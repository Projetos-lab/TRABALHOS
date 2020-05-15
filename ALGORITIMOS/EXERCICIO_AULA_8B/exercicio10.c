#include <stdio.h>
#include <math.h>

int duracao( int hora_ini, int min_ini, int hora_fim, int min_fim ) { 

  int dura_ini, dura_end, duracao;

  hora_ini = hora_ini * 60;
  hora_fim = hora_fim * 60;
  
  dura_ini = hora_ini + min_ini;
  dura_end = hora_fim + min_fim;

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

  int hora_ini, min_ini, hora_fim, min_fim, time;

  printf("Qual a hora de inicio do jogo? ");
  scanf("%d", &hora_ini);

  printf("\ne quantos minutos? ");
  scanf("%d", &min_ini);

  printf("\n\nQual a hora que o jogo acaba? ");
  scanf("%d", &hora_fim);

  printf("\ne quantos minutos?");
  scanf("%d", &min_fim);

  time = duracao(hora_ini, min_ini, hora_fim, min_fim);

  if ( time != 9999 ) {
    printf("Duração do jogo %d  em minutos", time);
  }

  return 0;

}