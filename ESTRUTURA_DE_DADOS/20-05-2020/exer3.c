
#include "grafos.c"

int main()
{
    nodetype *grafo = NULL;

    int origem, destino, tamanho;

    grafo = getnode(0);
    addnode(grafo, 1);
    addnode(grafo, 2);
    addnode(grafo, 3);
    addnode(grafo, 4);
    addnode(grafo, 5);

    join(grafo, 0, 1);
    join(grafo, 1, 2);
    join(grafo, 3, 0);
    join(grafo, 4, 3);
    join(grafo, 5, 0);
    join(grafo, 0, 5);
    join(grafo, 1, 4);
    join(grafo, 4, 5);

    printf("CIDADE DE ORIGEM 0-5: ");
    scanf("%i", &origem);
    printf("CIDADE DE destino 0-5: ");
    scanf("%i", &destino);

    if (shortpath(grafo, origem, destino, &tamanho))
    {
        printf("O menor caminho tem tamanho: %i!\n\n", tamanho);
    }
    else
    {
        printf("não existe");
    }

    return 0;
}