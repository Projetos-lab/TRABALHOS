#include "libCesar.c"
#include "windows.h"

no *PILHA;
no *FILA;
nodetree *ARVORE;
no *empilhar()
{

    FILE *ARQ;
    PILHA = NULL;
    int num;
    ARQ = fopen("dados.txt", "r");
    while (!feof(ARQ))
    {
        fscanf(ARQ, "%d\n", &num);
        push(&PILHA, num);
    }

    fclose(ARQ);

    return PILHA;
}

no *enfileirar()
{
    FILE *ARQ;
    FILA = NULL;
    int num;
    ARQ = fopen("dados.txt", "r");
    while (!feof(ARQ))
    {
        fscanf(ARQ, "%d\n", &num);
        qinsert(&FILA, num);
    }

    fclose(ARQ);

    return FILA;
}

nodetree *arborizar()
{

    FILE *ARQ;

    int num, cont =1;
    ARQ = fopen("dados.txt", "r");
    while (!feof(ARQ))
    {
        fscanf(ARQ, "%d\n", &num);

        if (cont == 1)
        {
            ARVORE = maketree(num);
            cont++;
        }
        else
        {
            insert_binary_tree(ARVORE, num);
        }
    }

    fclose(ARQ);

    return ARVORE;
}
int main(int argc, char const *argv[])
{
    LARGE_INTEGER tempo_inicial, tempo_final;
    int tempoPilha, tempoFila, tempoArvore;

    QueryPerformanceCounter(&tempo_inicial);
    ARVORE = arborizar();
    QueryPerformanceCounter(&tempo_final);
    tempoArvore = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos
    QueryPerformanceCounter(&tempo_inicial);
    FILA = enfileirar();
    QueryPerformanceCounter(&tempo_final);
    tempoFila = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos
    QueryPerformanceCounter(&tempo_inicial);
    PILHA = empilhar();
    QueryPerformanceCounter(&tempo_final);
    tempoPilha = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos

    

    printf("Arvore: \n");
    percorrer_ordem(ARVORE);
    printf("\nTempo Gasto: %d\n",tempoArvore);
    printf("Pilha: \n");
    percorrer_pilha(&PILHA);
    printf("\nTempo Gasto: %d\n",tempoPilha);
    printf("Fila: \n");
    percorrer_fila(&FILA);
    printf("\nTempo Gasto: %d",tempoFila);

    return 0;
}
