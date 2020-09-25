#include <stdio.h>
#include "libCesar.c"
no *PILHA;
no *FILA;
nodetree *arvore;
void dashboard()
{

    printf("\n                BEM VINDO!               ");
    printf("\n\n");
    printf("\n=========== PAINEL DE CONTROLE ===========");
    printf("\n=                                        =");
    printf("\n=[1] >>   CADASTRAR NUMERO               =");
    printf("\n=[2] >>   LISTAR NUMEROS DO ARQUIVO      =");
    printf("\n=[3] >>   LIMPAR ARQUIVO                 =");
    printf("\n=[4] >>   EMPILHAR COM DADOS DO ARQ      =");
    printf("\n=[5] >>   LISTAR COM DADOS DO ARQ        =");
    printf("\n=[6] >>   ARBORIZAR COM DADOS DO ARQ     =");
    printf("\n=                                        =");
    printf("\n=[9] >>   Sair                          =");

    printf("\n==========================================\nO que deseja fazer? ");
}
void mensagem(char txt[])
{
    printf("%s\n", txt);
    system("pause");
}
void br()
{
    printf("\n\n");
}

int cadastrar()
{
    int num, i;
    printf("Qual numero deseja inserir no arquivo? ");
    scanf("%i", &num);

    FILE *arq = fopen("dados10000.txt", "a+");
    FILE *arq2 = fopen("dados1000.txt", "a+");
    FILE *arq3 = fopen("dados100000.txt", "a+");

    for (i = 0; i < 10000; i++)
    {
        fprintf(arq, "%i\n", rand() % 100000);
    }
    for (i = 0; i < 1000; i++)
    {
        fprintf(arq2, "%i\n", rand() % 100000);
    }
    for (i = 0; i < 100000; i++)
    {
        fprintf(arq3, "%i\n", rand() % 100000);
    }
    fclose(arq);
    fclose(arq2);
    fclose(arq3);

    mensagem("\nCadastrado!");

    return 0;
}

int listar()
{
    FILE *arq;
    int num;
    arq = fopen("dados.txt", "r");
    br();
    printf("listando numeros do arquivo: ");
    br();

    while (!feof(arq))
    {
        fscanf(arq, "%i\n", &num);
        printf("%i\n", num);
    }
    fclose(arq);
    br();
    mensagem("listagem finalizada!");
    return 0;
}

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
    br();

    mensagem("Pilha realizada com sucesso!");
    percorrer_pilha(&PILHA);
    return PILHA;
}

no *emfileirar()
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
    br();

    mensagem("fila realizada com sucesso!");
    percorrer_fila(&FILA);
    return FILA;
}

nodetree *arborizar()
{

    maketree(arvore);
    FILE *ARQ;

    int num, cont = 1;
    ARQ = fopen("dados.txt", "r");
    while (!feof(ARQ))
    {
        fscanf(ARQ, "%d\n", &num);

        if (cont == 1)
        {
            arvore = maketree(num);
            cont++;
        }
        else
        {
            insert_binary_tree(arvore, num);
        }
    }

    fclose(ARQ);
    br();

    mensagem("Arvore realizada com sucesso!");
    percorrer_ordem(arvore);

    return arvore;
}

int limpar()
{
    FILE *arq = fopen("dados10000.txt", "w");
    FILE *arq2 = fopen("dados1000.txt", "w");
    FILE *arq3 = fopen("dados100000.txt", "w");
    
    fclose(arq);
    fclose(arq2);
    fclose(arq3);

    mensagem("Sumiu tudo! Arquivo limpo!");
    return 0;
}

int main(int argc, char *argv[])
{

    int escolha;
    for (;;)
    {
        system("cls");
        dashboard();
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            listar();
            break;

        case 3:
            limpar();
            break;
        case 4:
            PILHA = empilhar();
            break;
        case 5:
            FILA = emfileirar();
            break;
        case 6:
            arvore = arborizar();
            break;
        case 9:
            printf("\nSaindo do progama...");
            break;

        default:
            printf("\nOpcao inválida!");
            break;
        }
        sleep(1);
    }

    system("Pause >> null");

    return 0;
}
