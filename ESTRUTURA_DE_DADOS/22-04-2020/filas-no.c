#include <stdio.h>

typedef struct no
{
        int valor;
        struct no *proximo;
} no;


void insert(no **primeiro, int info) {
  no *novoNo, *aux;
  
  novoNo = (no *) malloc(sizeof(no)); // reserva o novo nó
  novoNo->valor = info;               // guarda a informação nó
  novoNo->proximo = NULL;           
  
  aux = *primeiro;
  
  if (aux==NULL) {           		// se a fila está vazia
     *primeiro = novoNo;     		// considera o primeiro a chegar
  } else {                          // se a fila não esta vazia
     while(aux->proximo!=NULL) {    // procura o ultimo nó
		aux = aux->proximo;
     }
     aux->proximo = novoNo;         // coloca o nó depois do último
  }
}


int qremove(no **primeiro) {
    int valorPrimeiro;
    no *novoPrimeiro;
    
    // se a pilha está vazia, retorna NULL
    if (*primeiro==NULL) return NULL;
    
    valorPrimeiro = (*primeiro)->valor;  // guarda o valor no primeiro nó
    novoPrimeiro = (*primeiro)->proximo; // guarda o end. do próximo nó
    free(*primeiro);                     // libera mem. do primeiro nó
    
	*primeiro = novoPrimeiro;            // muda prim. para seg. nó
    
    // retorna o valor que estava no prim. nó
    return valorPrimeiro;               
}


void percorrer(no **primeiro)
{
	while(*primeiro!=NULL)
	{
		printf("%i\n", qremove(primeiro));
	}
}

