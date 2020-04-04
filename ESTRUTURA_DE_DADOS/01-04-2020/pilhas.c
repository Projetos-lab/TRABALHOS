#define TAMANHO_MAXIMO 100

typedef struct {
	int topo;
	int itens[TAMANHO_MAXIMO];
} stack; //pilha

void push(stack *p, int valor) // empilhar
{
	
	if (p->topo==TAMANHO_MAXIMO-1) {
		printf("\nPilha cheia.\n");
		exit(1);
	}

	// ++(p->topo) - incrementa e depois obtém valor
	p->itens[++(p->topo)] = valor;
}

int pop(stack *p) // desempilhar
{
	if (empty(p)) {
		printf("Elemento inexistente!");
		exit(1);
	}
	// p->topo-- obtém o valor depois decrementa
	return p->itens[p->topo--];
}

int empty(stack *p) {
	return (p->topo==-1); // retorna 1 se vazia e 0 se não
}

void clear(stack *p) {
	p->topo = -1;
}

void percorrer(stack *p)
{
	while(!empty(p))
		printf("%i\t", pop(p));
}
