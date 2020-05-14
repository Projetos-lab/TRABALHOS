void push(no **topo, int numero) {
    no *novoNo;
    
    // reserva memória para o novo nó
    novoNo = (no *) malloc(sizeof(no)); 
    
    // guarda a informação no novo nó
    novoNo->valor = numero;
    
	// aponta o novo nó para o antigo nó raíz
    novoNo->proximo = *topo;
    
	// muda o endereço do raíz para o novo nó
    *topo = novoNo;
}

int pop(no **topo) {
    int valorTopo;
    no *novoTopo;
    
    // se a pilha está vazia, retorna NULL
    if (*topo==NULL) return NULL;
    
	// guarda o valor do topo
    valorTopo = (*topo)->valor;
    
	// guarda o endereço do segundo nó
    novoTopo = (*topo)->proximo;
    
	// libera memória do nó no topo
    free(*topo);
    
	// muda o topo para o segundo nó
    *topo = novoTopo;
    
	// retorna o valor que estava no topo
    return valorTopo;
}

void percorrer_pilha(no **topo)
{
	while(*topo!=NULL)
	{
		printf("%i ", pop(topo));
	}
}
