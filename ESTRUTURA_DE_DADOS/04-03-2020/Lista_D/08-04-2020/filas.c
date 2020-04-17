// ser�o TAMANHO_MAXIMO-1 elementos no m�ximo
#define TAMANHO_MAXIMO 100

typedef struct {
	int inicio, final;
	int itens[TAMANHO_MAXIMO];
} queue; // fila

void clear(queue *p)
{
	p->inicio = p->final = TAMANHO_MAXIMO - 1;
}

int empty(queue *q)
{
	 // retorna 1 se vazia e 0 se n�o
	return (q->inicio==q->final);
}

void insert(queue *q, int valor) // enfileirar
{
	if (q->final == TAMANHO_MAXIMO-1)
		q->final = 0;
	else
		q->final++;
	
	// se ap�s posicionar o pr�ximo �ndice
	// da fila, ele encontrar o primeiro
	if (q->final==q->inicio)
	{
		printf("Fila cheia!\n");
		exit(1);
	}

	q->itens[q->final] = valor;
}

int remove(queue *q) // desenfileirar
{
	if (empty(q))
	{
		printf("Elemento inexistente!");
		exit(1);
	}
	
	// mudar o �ndice de in�cio
	// se o in�cio � �timo �ndice do vetor
	if (q->inicio == TAMANHO_MAXIMO - 1)
		q->inicio = 0; // colocar no primeiro (circular)
	else
		q->inicio++; // se n�o, apenas avan�a uma posi��o
	
	return q->itens[q->inicio];
}

void percorrer(queue *q)
{
	// caso base � a pilha vazia,
	// neste caso n�o faz nada

	
	if (!empty(q))
	{
		// caso recursivo, remove e continua
		// percorrendo
		printf("%i\t", remove(q));
		percorrer(q);
	}
}
