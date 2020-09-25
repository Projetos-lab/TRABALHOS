#include <stdio.h>
#include <locale.h>

typedef struct nodetype {
	int info;
	struct nodetype *point;
	struct nodetype *next;
} nodetype;

void __addend(nodetype *grafo, nodetype *novono)
{
	// vai at� o final da lista ligada
	while(grafo->next!=NULL)
		grafo = grafo->next;

	// vincula o �ltimo n� com o novo
	grafo->next = novono;
}

nodetype * getnode(int x)
{
	nodetype *novono = NULL;
	novono = malloc(sizeof(nodetype));
	novono->info = x;
	novono->next = NULL;
	novono->point = NULL;
	return novono;
}

// findnode(x) - retorna um ponteiro para 
// um n� de cabe�alho com info == x
nodetype* findnode(nodetype *grafo, int x)
{
	while(grafo!=NULL)
		if (grafo->info==x)
			return grafo;
		else
			grafo = grafo->next;
			
	return NULL;
}

// adjacent(a,b) - retorna true se "b" for adjascente a "b" e false caso contr�rio.
int adjacent(nodetype *grafo, int a, int b)
{
	nodetype *na;
	
	if (grafo==NULL)
		return 0;
	
	// procura um n� com valor "a"
	na = findnode(grafo, a);
	if (na==NULL)
		return 0; // se n�o acha retorna false
	
	// se achar, pega a lista de adjac�ncia do n� com valor "a"
	grafo = na->point;
	
	// percorre a lista
	while(grafo!=NULL)
	{
		// verifica se cada item da adjac�ncia aponta
		// para um n� cujo valor � "b"
		if ((grafo->point)->info==b)
			return 1;
		else
			grafo = grafo->next; // pr�ximo n� da adjac�ncia
	}
	
	// se n�o encontrar, retorna false
	return 0;
}

void addnode(nodetype *grafo, int x)
{
	nodetype *novono = NULL;
	
	// cria um novo n�, com o valor
	novono = getnode(x);

	__addend(grafo, novono);
}

// joinwt(a,b,x) - insere um arco do n� "a" at� no n� "b" com peso "x" em um grafo ponderado
void joinwt(nodetype *grafo, int p, int q, int x)
{
	nodetype *np;
	nodetype *nq;
	nodetype *novono;
	
	if (!adjacent(grafo, p, q))
	{
		np = findnode(grafo, p);
		nq = findnode(grafo, q);
		
		// se os dois n�s existirem
		if (np!=NULL && nq!=NULL)
		{
			// cria um novo n� de adjascenc�ncia
			novono = getnode(x);
			
			//novo n� aponta para o n� de destino
			novono->point = nq;
			
			// se o n� de origem ainda n�o for origem de nenhum arco
			if(np->point==NULL)
				np->point = novono; // seta o primeiro
			else
				__addend(np->point, novono); // sen�o, adiciona no final
		}
	}
}

// join(a,b) - introduz um arco de n� "a" at� o n� "b" se ainda n�o existir
void join(nodetype *grafo, int p, int q)
{
	joinwt(grafo, p, q, 0);
}

void percorrer_grafo(nodetype *grafo)
{
	nodetype *arcos=NULL;
	while(grafo!=NULL)
	{
		printf("%i\t",grafo->info);
		arcos = grafo->point;
		while(arcos!=NULL)
		{
			printf("(%i -> %i, %i)  ",grafo->info,(arcos->point)->info,arcos->info);
			arcos = arcos->next;
		}
		printf("\n\n");
		grafo = grafo->next;
	}
}

int countnodes(nodetype *grafo)
{
	int qtd=0;
	while(grafo!=NULL)
	{
		qtd++;
		grafo = grafo->next;
	}
	return qtd;
}


int findpath(nodetype *grafo, int k, int a, int b)
{	
	nodetype *auxgrafo = NULL;
	
	if (k==1)
		return adjacent(grafo, a, b);
	
	
	auxgrafo = grafo;
	while(auxgrafo!=NULL)
	{
		if (adjacent(grafo, a,auxgrafo->info) && findpath(grafo, k-1,auxgrafo->info,b))
			return 1;
		auxgrafo = auxgrafo->next;
	}
	
	return 0;
}


int shortpath(nodetype *grafo, int s, int t, int *pd)
{
	int i, qtd;
	
	qtd = countnodes(grafo);
	
	for(i=1;i<=qtd;i++)
	{
		if (findpath(grafo, i, s, t))
		{
			*pd = i;
			return 1; // true
		}	
	}
	return 0; // false
}

