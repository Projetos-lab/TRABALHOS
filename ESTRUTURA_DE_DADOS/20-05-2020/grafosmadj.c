
void join(int adj[MAXNODES][MAXNODES], int node1, int node2)
{
	adj[node1][node2] = 1; // true
}


void remv(int adj[MAXNODES][MAXNODES], int node1, int node2)
{
	adj[node1][node2] = 0; // false
}

int adjacent(int adj[MAXNODES][MAXNODES], int node1, int node2)
{
	return adj[node1][node2];
}


// função auxiliar, para "inicializar" toda a matriz de 
// adjacência com valores FALSE, sem arestas definidas
void clear(int adj[MAXNODES][MAXNODES])
{
	int i, j;
	for(i=0;i<MAXNODES;i++)
		for(j=0;j<MAXNODES;j++)
			adj[i][j] = 0; // false
}


void percorrer_grafo(int adj[MAXNODES][MAXNODES])
{
	int i, j;
	for(i=0;i<MAXNODES;i++)
	{
		for(j=0;j<MAXNODES;j++)
		{
			printf("%i  ", adj[i][j]);
		}
		printf("\n");	
	}
}


int findpath(int adj[MAXNODES][MAXNODES], int k, int a, int b)
{	
	if (k==1)
		return adjacent(adj, a, b);
	
	int i, j;
	for(i=0;i<MAXNODES;i++)
	{
		if (adjacent(adj, a, i) && findpath(adj, k-1,i,b))
			return 1;
	}

	return 0;
}

int shortpath(int adj[MAXNODES][MAXNODES], int s, int t, int *pd)
{
	int i;
	for(i=1;i<=MAXNODES;i++)
	{
		if (findpath(adj, i, s, t))
		{
			*pd = i;
			return 1; // true
		}	
	}
	return 0; // false
}


