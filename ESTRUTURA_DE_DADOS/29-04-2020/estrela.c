#include <stdio.h>
int main() {
 float al, ps;
 int id;

 FILE *arqin; // ponteiro para arquivo de entrada
 arqin = fopen("canditatos.in","r"); // arquivo de entrada

 // leitura equando não for fim de arquivo
 while(!feof(arqin)) {
 // le a linha na ordem informada no problema
 // altura como float, idade como inteiro e peso como float
 fscanf(arqin,"%f %i %f\n", &al, &id, &ps);

 // faz as comparações para validar as condições
 if (al>=1.7 && id>=21 && id<=35 && ps>=60 && ps<=95)
 printf("APTO\n"); //escreve na tela
 else
 printf("INAPTO\n"); //escreve na tela
 }

 // fecha o arquivo
 fclose(arqin);

 // espera que uma tecla seja pressionada
 getch();
} 