#include <stdio.h>
#include <stdlib.h>

/* LINK REFER�NCIA
   https://www.guru99.com/c-file-input-output.html
*/


/* Biblioteca para manipulu��o 
   de texto, n�o � fundamental
   para manipul��o do arquivo
   texto mas ajuda com String*/
#include <string.h>


int main(int argc, char *argv[]) {

	/* Vari�veis */	
	FILE *farq;
	int i = 0;
	char linha1[50] = {"Texto linha 1"};
	char linha2[50] = {"Texto linha 2"};
	char proximalinha[1] = {"\n"};
	char letra;

	/******** CRIA��O E GRAVA��O  *************/
	
	/* Cria o arquivo texto verificando com vali-
	 * da��o se j� existe um arquivo com o mesmo
	 * nome, no mesmo local */
	if ((farq = fopen("arq.txt", "w")) == NULL) {
		printf("Erro criacao arquivo! \n");
		exit(1);
	} 
	
	/* Grava��o caracter a caracter no arquivo
	   baseado em um vetor de caracteres */
	for(i = 0; i < strlen(linha1); i++) {
		fputc(linha1[i], farq);
	}
	/* Gravando o ultimo cacter como saldo 
	   linha */
	fputc(proximalinha[0], farq); 

	for(i = 0; i < strlen(linha1); i++) {
		fputc(linha2[i], farq);
	}
	
	fputc(proximalinha[0], farq); 
	
	/* Fechamento arquivo */
	fclose(farq);
	

	/***** ABERTURA ARQUIVO E LEITURA *********/
	
	/* Realizando a abertura do arquivo com va-
	   lida��o. */
	if ((farq = fopen("arq.txt", "r")) == NULL) {
		printf("Erro na abertura do arquivo! \n");
		exit(1);
	}
		
	/* Iniciando a leitura do arquivo texto ca-
	   racter por caracter. */
	i = 0;
	letra = fgetc(farq);
	
	while(letra != EOF) {
		//linha[i] = letra;
		printf("%c", letra);
		
		i = i + 1;
		letra = fgetc(farq);
	}
	
	/* Fechamento arquivo */
	fclose(farq);
	
	return 0;
}
