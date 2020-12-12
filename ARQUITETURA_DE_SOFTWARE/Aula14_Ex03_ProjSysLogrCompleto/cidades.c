#include <stdio.h>

#include <string.h>
#include "cidades.h"

typedef struct {
	int codigo;
	char nome[50];
	char apelido[50];
	float numeroHabitantes;
	int numeroBairros;
	char regiao[25];
	char observacoes[50];
} tipoCidade;


tipoCidade _vetorCidades[5];


int obterTamanhoVetorCidades() {
	return sizeof(_vetorCidades) / sizeof(tipoCidade);
}


void inicializarVetorCidades() {
	int i = 0;
	int tamvet = obterTamanhoVetorCidades();
	
	for(i = 0; i < tamvet; i++ ) {
		_vetorCidades[i].codigo = 0;
		strcpy(_vetorCidades[i].nome, "NULL");
		strcpy(_vetorCidades[i].apelido, "NULL");
		_vetorCidades[i].numeroHabitantes = 0.0;
		_vetorCidades[i].numeroBairros = 0;
		strcpy(_vetorCidades[i].regiao, "NULL");
		strcpy(_vetorCidades[i].observacoes, "NULL");
	}	
}


int obterPosicaoVaziaVetorCidades() {
	int i = 0;
	int j = -1;
	int tamvet = obterTamanhoVetorCidades();
	
	for(i = 0; i < tamvet; i++ ) {
		if (_vetorCidades[i].codigo == 0) {
			j = i;
			break;
		}
	}	
	
	return j;
}


void cadastrarCidade() {
	int x;
	int pos = obterPosicaoVaziaVetorCidades();
	
	if (pos == -1) {
		printf("Base de dados de cidades cheia! \n");
	} else {
		printf("Digite o codigo: ");
		scanf("%i", &_vetorCidades[pos].codigo);		
		printf("Digite o nome: ");
		scanf("%s", &_vetorCidades[pos].nome);
		printf("Digite o apelido: ");
		scanf("%s", &_vetorCidades[pos].apelido);
		printf("Digite o numero de hab. (milhoes, ex.: 1.56): ");
		scanf("%f", &_vetorCidades[pos].numeroHabitantes);
		printf("Digite o numero de bairros (numero inteiro): ");
		scanf("%i", &_vetorCidades[pos].numeroBairros);
		printf("Digite a regiao (NO, SU, LE, OE): ");
		scanf("%s", &_vetorCidades[pos].regiao);
		printf("Digite a observacao: ");
		scanf("%s", &_vetorCidades[pos].observacoes);

		printf("Cadastro realizado!\n");
	}	
}


void atualizarCidadePorCodigo() {
	int i = 0; 	
	int codigo = 0; 
	int achou = 0;
	int tam = obterTamanhoVetorCidades();
	
	printf("Digite o codigo: ");
	scanf("%i", &codigo);
	
	for(i = 0; i < tam; i++ ) {
		if (_vetorCidades[i].codigo == codigo) {
			printf("Registro localizado na posicao %i, informe os dados abaixo: \n");

			printf("Digite o nome: ");
			scanf("%s", &_vetorCidades[i].nome);
			printf("Digite o apelido: ");
			scanf("%s", &_vetorCidades[i].apelido);
			printf("Digite o numero de hab. (milhoes, ex.: 1.56): ");
			scanf("%f", &_vetorCidades[i].numeroHabitantes);
			printf("Digite o numero de bairros (numero inteiro): ");
			scanf("%i", &_vetorCidades[i].numeroBairros);
			printf("Digite a regiao (NO, SU, LE, OE): ");
			scanf("%s", &_vetorCidades[i].regiao);
			printf("Digite a observacao: ");
			scanf("%s", &_vetorCidades[i].observacoes);
			
			achou = 1;
			break;
		}
	}
	
	if (achou == 1) {
		printf("Registro atualizado com sucesso! \n");
	} else {
		printf("Cidade nao localizada!\n");
	}		
}


void imprimirCidades() {
	int i = 0;
	int tam = obterTamanhoVetorCidades();
	
	for(i = 0; i < tam; i++ ) {
		if (_vetorCidades[i].codigo != 0) {
			printf("[%i]: %i - %s, %s, %0.2f, %d, %s, %s. \n", 
					i, 
					_vetorCidades[i].codigo, 
					_vetorCidades[i].nome,
					_vetorCidades[i].apelido,
					_vetorCidades[i].numeroHabitantes,
					_vetorCidades[i].numeroBairros,
					_vetorCidades[i].regiao, 
					_vetorCidades[i].observacoes);
		}
	}		
}


void excluirCidadePorCodigo() {
	int i = 0; 	
	int codigo = 0; 
	int achou = 0;
	int tam = obterTamanhoVetorCidades();
	
	printf("Digite o codigo: ");
	scanf("%i", &codigo);
	
	for(i = 0; i < tam; i++ ) {
		if (_vetorCidades[i].codigo == codigo) {
			
			_vetorCidades[i].codigo = 0;
			strcpy(_vetorCidades[i].nome, "NULL");
			strcpy(_vetorCidades[i].apelido, "NULL");
			_vetorCidades[i].numeroHabitantes = 0.0;
			_vetorCidades[i].numeroBairros = 0;
			strcpy(_vetorCidades[i].regiao, "NULL");
			strcpy(_vetorCidades[i].observacoes, "NULL");
			
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


void pesquisarCidadePorCodigo() {
	int i = 0; 	
	int codigo = 0; 
	int achou = 0;
	int tam = obterTamanhoVetorCidades();
	
	printf("Digite o codigo: ");
	scanf("%i", &codigo);
	
	for(i = 0; i < tam; i++ ) {
		if (_vetorCidades[i].codigo == codigo) {
			printf("Registro localizado na posicao %i.: \n", i);
			printf("[%i]: %i - %s, %s, %0.2f, %d, %s, %s. \n", 
					i, 
					_vetorCidades[i].codigo, 
					_vetorCidades[i].nome,
					_vetorCidades[i].apelido,
					_vetorCidades[i].numeroHabitantes,
					_vetorCidades[i].numeroBairros,
					_vetorCidades[i].regiao, 
					_vetorCidades[i].observacoes);
			
			achou = 1;
			break;
		}
	}
	
	if (achou != 1) {
		printf("Cidade nao localizada!\n");
	}		
}

