#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "estados.h"
#include "cidades.h"

int opc1 = 0, 
    opc2 = 0;

void imprimirMenuPrincipal() {
	printf(" \n");
	printf(":: SYSLOGR   ::..     \n");
	printf("1. Estados            \n");
	printf("2. Cidades            \n");
	printf("3. Bairros            \n");
	printf("9. Sair               \n");
	printf("Dig. opcao desejada:  \n");
	scanf("%d", &opc1);
}

void imprimirSubMenuEstados() {
	do {
		printf(" \n");
		printf("::SYSLOGR>ESTADOS ::..\n");
		printf("11. Inserir           \n");
		printf("12. Alterar           \n");
		printf("13. Excluir           \n");
		printf("14. Pesquisar         \n");
		printf("15. Imprimir todos    \n");
		printf("16. Gravar banco dados\n");
		printf("19. Sair              \n");
		printf("Dig. opcao desejada:  \n");
		scanf("%d", &opc2);
		
		if (opc2 == 11) {
			cadastrarEstado();
			
		} else if (opc2 == 12) {
			atualizarEstadoPorCodigo();
			
		} else if (opc2 == 13) {
			excluirEstadoPorCodigo();
			
		} else if (opc2 == 14) {
			int x = 0;
			
			printf("Deseja pesquisar por: 1 (codigo), 2 (sigla): ");
			scanf("%i", &x);

			if ((x == 1) || (x == 2)) {
				if (x == 1) {
					pesquisarEstadoPorCodigo();

				} else {
					pesquisarEstadoPorSigla();

				}
			} else {
				printf("Opcao invalida! \n");
			}
			
		} else if (opc2 == 15) {
			imprimirEstados();

		} else if (opc2 == 16) {
			gravarVetorEstadosBanco();
			
		}
	} while (opc2 != 19);
}


void imprimirSubMenuCidades() {
	do {
		printf(" \n");
		printf("::SYSLOGR>CIDADES ::..\n");
		printf("21. Inserir           \n");
		printf("22. Alterar           \n");
		printf("23. Excluir           \n");
		printf("24. Pesquisar         \n");
		printf("25. Imprimir todos    \n");
		printf("29. Sair              \n");
		printf("Dig. opcao desejada:  \n");
		scanf("%d", &opc2);
		
		if (opc2 == 21) {
			cadastrarCidade();
			
		} else if (opc2 == 22) {
			atualizarCidadePorCodigo();
			
		} else if (opc2 == 23) {
			excluirCidadePorCodigo();
			
		} else if (opc2 == 24) {
			pesquisarCidadePorCodigo();
						
		} else if (opc2 == 25) {
			imprimirCidades();			
			
		}
	} while (opc2 != 29);
}



int main() {
	
	inicializarVetorEstados();
	inicializarVetorCidades();
	
	do {
		imprimirMenuPrincipal();		
		
		switch (opc1) {
			case 1: 
				imprimirSubMenuEstados();		
			break;
		
			case 2:
				imprimirSubMenuCidades();
			break;
		
			case 3: 
				printf("Opcao nao implementada!\n");	
			break;	
		}		
	} while (opc1 != 9);

	system("pause");
	return 0;	
}

