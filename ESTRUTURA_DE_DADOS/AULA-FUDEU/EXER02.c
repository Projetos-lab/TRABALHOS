#include "libCesar.c"
#include "windows.h"

no *PILHA;
no *PILHA1;
no *PILHA2;
no *FILA;
no *FILA2;
no *FILA1;
nodetree *ARVORE;
nodetree *ARVORE1;
nodetree *ARVORE2;
no *empilhar()
{
    PILHA = NULL;
    int num;

    FILE *ARQ = fopen("dados10000.txt", "r");
    while (!feof(ARQ))
    {
        fscanf(ARQ, "%d\n", &num);
        push(&PILHA, num);
    }

    fclose(ARQ);
    return PILHA;
}
no *empilhar1()
{
    PILHA = NULL;
    int num;
    FILE *arq3 = fopen("dados100000.txt", "r");
    while (!feof(arq3))
    {
        fscanf(arq3, "%d\n", &num);
        push(&PILHA, num);
    }

    fclose(arq3);
    return PILHA;
}
no *empilhar2()
{

    PILHA = NULL;
    int num;

    FILE *arq2 = fopen("dados1000.txt", "r");
    while (!feof(arq2))
    {
        fscanf(arq2, "%d\n", &num);
        push(&PILHA, num);
    }

    fclose(arq2);

    return PILHA;
}

no *enfileirar()
{
    FILA = NULL;
    int num;

    FILE *ARQ = fopen("dados10000.txt", "r");
    while (!feof(ARQ))
    {
        fscanf(ARQ, "%d\n", &num);
        qinsert(&FILA, num);
    }
    fclose(ARQ);
    return FILA;
}
no *enfileirar1()
{
    FILA2 = NULL;
    int num;
    FILE2 *arq3 = fopen("dados100000.txt", "r");
    while (!feof(arq3))
    {
        fscanf(arq3, "%d\n", &num);
        qinsert(&FILA2, num);
    }

    fclose(arq3);
    return FILA2;
}
no *enfileirar2()
{
    FILA1 = NULL;
    int num;
    FILE *arq2 = fopen("dados1000.txt", "r");
    while (!feof(arq2))
    {
        fscanf(arq2, "%d\n", &num);
        qinsert(&FILA1, num);
    }

    fclose(arq2);

    return FILA1;
}

nodetree *arborizar()
{
    int num, cont = 1;
    FILE *ARQ = fopen("dados10000.txt", "r");
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
nodetree *arborizar1()
{
    int num, cont = 1;
    FILE *arq3 = fopen("dados100000.txt", "r");
    while (!feof(arq3))
    {
        fscanf(arq3, "%d\n", &num);

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
    fclose(arq3);
    return ARVORE;
}
nodetree *arborizar2()
{
    int num, cont = 1;
    FILE *arq2 = fopen("dados1000.txt", "r");
    while (!feof(arq2))
    {
        fscanf(arq2, "%d\n", &num);

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

    fclose(arq2);

    return ARVORE;
}
int main(int argc, char const *argv[])
{
    LARGE_INTEGER tempo_inicial, tempo_final;
    int tempoPilha, tempoFila, tempoArvore;
    int tempoPilha2, tempoFila2, tempoArvore2;
    int tempoPilha1, tempoFila1, tempoArvore1;

    QueryPerformanceCounter(&tempo_inicial);
    ARVORE = arborizar();
    QueryPerformanceCounter(&tempo_final);
    tempoArvore1 = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos
    QueryPerformanceCounter(&tempo_inicial);
    FILA = enfileirar();
    QueryPerformanceCounter(&tempo_final);
    tempoFila1 = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos
    QueryPerformanceCounter(&tempo_inicial);
    PILHA = empilhar();
    QueryPerformanceCounter(&tempo_final);
    tempoPilha1 = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos

    QueryPerformanceCounter(&tempo_inicial);
    ARVORE1 = arborizar1();
    QueryPerformanceCounter(&tempo_final);
    tempoArvore = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos
    QueryPerformanceCounter(&tempo_inicial);
    FILA1 = enfileirar1();
    QueryPerformanceCounter(&tempo_final);
    tempoFila = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos
    QueryPerformanceCounter(&tempo_inicial);
    PILHA1 = empilhar1();
    QueryPerformanceCounter(&tempo_final);
    tempoPilha = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos

    QueryPerformanceCounter(&tempo_inicial);
    ARVORE2 = arborizar2();
    QueryPerformanceCounter(&tempo_final);
    tempoArvore2 = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos
    QueryPerformanceCounter(&tempo_inicial);
    FILA2 = enfileirar2();
    QueryPerformanceCounter(&tempo_final);
    tempoFila2 = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos
    QueryPerformanceCounter(&tempo_inicial);
    PILHA2 = empilhar2();
    QueryPerformanceCounter(&tempo_final);
    tempoPilha2 = tempo_final.QuadPart - tempo_inicial.QuadPart; //QuadPart == milisegundos

    printf("Arvore: \n");
    // percorrer_ordem(ARVORE);
    printf("\nTempo Gasto: %d\n", tempoArvore);
    printf("Pilha: \n");
    // percorrer_pilha(&PILHA);
    printf("\nTempo Gasto: %d\n", tempoPilha);
    printf("Fila: \n");
    // percorrer_fila(&FILA);
    printf("Tempo Gasto: %d", tempoFila);

    printf("\n\n\n");
    printf("Arvore1: \n");
    // percorrer_ordem(ARVORE);
    printf("\nTempo Gasto: %d\n", tempoArvore1);
    printf("Pilha1: \n");
    // percorrer_pilha(&PILHA);
    printf("\nTempo Gasto: %d\n", tempoPilha1);
    printf("Fila1: \n");
    // percorrer_fila(&FILA);
    printf("Tempo Gasto: %d", tempoFila1);
    printf("\n\n\n");
    printf("Arvore2: \n");
    // percorrer_ordem(ARVORE);
    printf("\nTempo Gasto: %d\n", tempoArvore2);
    printf("Pilha2: \n");
    // percorrer_pilha(&PILHA);
    printf("\nTempo Gasto: %d\n", tempoPilha2);
    printf("Fila2: \n");
    // percorrer_fila(&FILA);
    printf("Tempo Gasto: %d", tempoFila2);
    return 0;
}
