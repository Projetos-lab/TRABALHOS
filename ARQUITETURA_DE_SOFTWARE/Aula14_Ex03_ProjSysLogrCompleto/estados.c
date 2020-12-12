#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "estados.h"


FILE *farq;
char linha[5];
char proximalinha[1] = {"\n"};


typedef struct {
	int codigo;
	char sigla[2];
} tipoEstado;

tipoEstado _vetorEstados[5];

int obterTamanhoVetor() {
	return sizeof(_vetorEstados) / sizeof(tipoEstado);
}


void gravarVetorEstadosBanco() {
	int i = 0;
	
	if ((farq = fopen("_estados.txt", "w")) == NULL) {
		printf("Erro criacao arquivo! \n");
	} 
	
	for(i = 0; i < obterTamanhoVetor(); i++)	 {
		if (_vetorEstados[i].codigo != 0) {
			fprintf(farq, "%02d", _vetorEstados[i].codigo);
			fprintf(farq, "%02s", _vetorEstados[i].sigla);
			fputc(proximalinha[0], farq); 
		}
	}
	
	fclose(farq);
}


void inicializarVetorEstados() {
	int i = 0;
	int tamvet = obterTamanhoVetor();
	
	for(i = 0; i < tamvet; i++ ) {
		_vetorEstados[i].codigo = 0;
		strcpy(_vetorEstados[i].sigla, "NU");
	}	
}

int obterPosicaoVaziaVetorEstados() {
	int i = 0, j = -1;
	int tamvet = obterTamanhoVetor();
	
	for(i = 0; i < tamvet; i++ ) {
		if (_vetorEstados[i].codigo == 0) {
			j = i;
			break;
		}
	}	
	
	return j;
}

void cadastrarEstado() {
	int x;
	int pos = obterPosicaoVaziaVetorEstados();
	
	if (pos == -1) {
		printf("Base de dados cheia!\n");
	} else {
		printf("Digite o codigo: ");
		scanf("%i", &_vetorEstados[pos].codigo);
		printf("Digite a sigla: ");
		scanf("%s", &_vetorEstados[pos].sigla);
		
		printf("Cadastro realizado!\n");
	}	
}

void atualizarEstadoPorCodigo() {
	int i = 0; 	
	int codigo = 0; 
	int achou = 0;
	int tam = obterTamanhoVetor();
	
	printf("Digite o codigo: ");
	scanf("%i", &codigo);
	
	for(i = 0; i < tam; i++ ) {
		if (_vetorEstados[i].codigo == codigo) {
			printf("Registro localizado na posicao %i, informe a nova sigla: \n");
			scanf("%s", &_vetorEstados[i].sigla);
						
			achou = 1;
			break;
		}
	}
	
	if (achou == 1) {
		printf("Registro atualizado com sucesso! \n");
	} else {
		printf("Estado nao localizado!\n");
	}		
}

void excluirEstadoPorCodigo() {
	int i = 0; 	
	int codigo = 0; 
	int achou = 0;
	int tam = obterTamanhoVetor();
	
	printf("Digite o codigo: ");
	scanf("%i", &codigo);
	
	for(i = 0; i < tam; i++ ) {
		if (_vetorEstados[i].codigo == codigo) {
			
			_vetorEstados[i].codigo = 0;
			strcpy(_vetorEstados[i].sigla, "NU");
			
			achou = 1;
			break;
		}
	}
	
	if (achou == 1) {
		printf("Estado excluido com sucesso! \n");
	} else {
		printf("Estado nao localizado!\n");
	}		
}

void pesquisarEstadoPorCodigo() {
	int i = 0; 	
	int codigo = 0; 
	int achou = 0;
	int tam = obterTamanhoVetor(1);
	
	printf("Digite o codigo: ");
	scanf("%i", &codigo);
	
	for(i = 0; i < tam; i++ ) {
		if (_vetorEstados[i].codigo == codigo) {
			achou = 1;
			break;
		}
	}
	
	if (achou == 1) {
		printf("Estado localizado na posicao: %i! \n", i);
	} else {
		printf("Estado nao localizado!\n");
	}		
}

void pesquisarEstadoPorSigla() {
	int i = 0; 	
	int achou = 0;
	int tam = obterTamanhoVetor(1);
	char sigla[2];
	
	printf("Digite o sigla: ");
	scanf("%s", sigla);
	
	for(i = 0; i < tam; i++ ) {
		if (strcmp(_vetorEstados[i].sigla, sigla) == 0) {
			achou = 1;
			break;
		}
	}
	
	if (achou == 1) {
		printf("Estado localizado na posicao: %i! \n", i);
	} else {
		printf("Estado nao localizado!\n");
	}		
}

void imprimirEstados() {
	int i = 0;
	int tam = obterTamanhoVetor(1);
	
	for(i = 0; i < tam; i++ ) {
		if (_vetorEstados[i].codigo != 0) {
			printf("%i: %i - %s \n", i, _vetorEstados[i].codigo, _vetorEstados[i].sigla);
		}
	}		
}



