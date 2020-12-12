#include <stdio.h>
#include <stdlib.h>

/* Adicionando biblioteca de manipulação de texto*/
#include <string.h>

int main(int argc, char *argv[]) {
	/************** Variáveis ********************/	
	FILE *farq;
	char proximalinha[1] = {"\n"};
	char linha[56];

	int codigo1 = 1;
	char nome1[50] = {"ANA MARIA"};
	int codigo2 = 2;
	char nome2[50] = {"JOAO PEDRO"};

	/************** Criação arquivo **************/	
	/* Criação arquivo */
	if ((farq = fopen("banco.txt", "w")) == NULL) {
		printf("Erro criacao arquivo! \n");
		return 0;
	} 
	
	/* Gravando dados */
	fprintf(farq, "%05d", codigo1);
	fprintf(farq, "%50s", nome1); // Se utilizar "%-50s", alinhamento a esquerda
	fputc(proximalinha[0], farq); 
	
	fprintf(farq, "%05d", codigo2);
	fprintf(farq, "%50s", nome2);
	fputc(proximalinha[0], farq); 
	
	/* Fechando arquivo */
	fclose(farq);
		
	/************** Leitura arquivo **************/	
	/* Criação arquivo */
	if ((farq = fopen("banco.txt", "r")) == NULL) {
		printf("Erro na abertura do arquivo! \n");
		return 0;
	}
	
	/* Leitura cada linha arquivo */
	while ((fgets(linha, 56, farq)) != NULL) {
		printf("%s", linha);
	}

	/* Fechando arquivo */
	fclose(farq);
	
	return 0;
}


