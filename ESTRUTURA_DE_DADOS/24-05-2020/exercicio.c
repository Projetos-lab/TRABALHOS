int main(int argc, char const *argv[])
{
    nodetype *GRAFO;
    int QTD, ORIGEM, DESTINO, TAMANHO;

    GRAFO = GerarGrafo();
    QTD = QtdNodes();

    percorrer_grafo(GRAFO);

    printf("Cidade de origem (0 - %i): ", QTD);
    scanf("%i", &ORIGEM);

    printf("Cidade de destino (0 - %i): ", QTD);
    scanf("%i", &DESTINO);

    if (shortpath(GRAFO, ORIGEM, DESTINO, &TAMANHO))
    {
        mensagem("o menor caminho: ", TAMANHO);
    }
    else
    {
        printf("Nada encrontado\n\n");
    }

    return 0;
}
