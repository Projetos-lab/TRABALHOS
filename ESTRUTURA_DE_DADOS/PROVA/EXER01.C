
#include "grafos.c"


void mensagem(char txt[], int valor)
{
    printf("%s \n%i\n", txt, valor);
}

nodetype *GerarGrafo()
{
    int i, qtd, cidade1, cidade2;
    qtd = 0;
    nodetype *GRAFO;

    FILE *ARQ;
    ARQ = fopen("cidades.txt", "r");

    while (!feof(ARQ))
    {
        if (qtd == 0)
        {
            fscanf(ARQ, "%i\n", &qtd);
            for (i = 0; i < qtd; i++)
            {
                if(i==0)
                    GRAFO = getnode(i);
                else
                    addnode(GRAFO, i);
            }
        }else
        {
            fscanf(ARQ,"%i %i\n", &cidade1,&cidade2);
            join(GRAFO,cidade1,cidade2);
        }
        
    }
    fclose(ARQ);

    return GRAFO;
}

int main(int argc, char const *argv[])
{
    nodetype *GRAFO;
    int QTD, ORIGEM, DESTINO, TAMANHO;

    GRAFO = GerarGrafo();
   	QTD = countnodes(GRAFO);

    percorrer_grafo(GRAFO);

    printf("Cidade de origem (0 - %i): ", QTD);
    scanf("%i", &ORIGEM);

    printf("Cidade de destino (0 - %i): ", QTD);
    scanf("%i", &DESTINO);

    if (LONGPATH(GRAFO, ORIGEM, DESTINO, &TAMANHO))
    {
        mensagem("o maior caminho: ", TAMANHO);
    }
    else
    {
        printf("Nada encrontado\n\n");
    }
	
    return 0;
}


int LONGPATH(nodetype *grafo, int s, int t, int *pd)
{
	int i, qtd;
	
	qtd = countnodes(grafo);
	
	for(i=qtd;i>=1;i--)
	{
		if (findpath(grafo, i, s, t))
		{
			*pd = i;
			return 1; // true
		}	
	}
	return 0; // false
}
