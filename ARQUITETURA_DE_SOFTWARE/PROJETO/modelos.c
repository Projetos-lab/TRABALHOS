#include <stdio.h>
#include <stdlib.h>

#define QTD 100
#include <string.h>
#include "modelos.h"

typedef struct
{
    int ATIVO;
    int MODELO_ID;
    char NOME[50];
    char OBS[500];

} MODELOS;

MODELOS CAR_MODELOS[QTD];

int LimparVetoresModelos(int cont)
{
    if (cont <= QTD)
    {
        CAR_MODELOS[cont].ATIVO = 0;
        return LimparVetoresModelos(++cont);
    }

    return 1;
}

int procuraIdModelos(int cont)
{
    if (cont <= QTD && CAR_MODELOS[cont].ATIVO == 0)
    {

        return cont;
    }
    if (cont >= QTD)
    {
        return -1;
    }

    return procuraIdModelos(++cont);
}

void imprimeIdModelos(int cont)
{
    if (cont <= QTD && CAR_MODELOS[cont].ATIVO == 1)
    {

        printf("%d - \t", cont);
        imprimeIdModelos(++cont);
    }
}

void insereModelo()
{

    int moduloID = procuraIdModelos(0);
    printf("\nInserir novo registro:\n");
    CAR_MODELOS[moduloID].ATIVO = 1;
    printf("\nid usado: %d\n", moduloID);
    CAR_MODELOS[moduloID].MODELO_ID = moduloID;
    printf("ID: %d", CAR_MODELOS[moduloID].MODELO_ID);
    fflush(stdin);

    printf("\nNOME:");
    gets(CAR_MODELOS[moduloID].NOME);
    printf("\nOBS:");
    gets(CAR_MODELOS[moduloID].OBS);
    printf("\nNOME: %s", CAR_MODELOS[moduloID].NOME);

    printf("Dados inseridos com sucesso!\n\n");
    printf("\nID: %d", CAR_MODELOS[moduloID].MODELO_ID);
    printf("\nNOME: %s", CAR_MODELOS[moduloID].NOME);
    printf("\nOBS: %s", CAR_MODELOS[moduloID].OBS);
    sleep(5);
}

void alteraModelo()
{
    int moduloIdAlterado;
    printf("\nAlterar registro:\n");
    printf("\nQual ID deseja alterar?\n");
    scanf("%d", &moduloIdAlterado);
    fflush(stdin);
    printf("\nid usado: %d\n", moduloIdAlterado);

    if (CAR_MODELOS[moduloIdAlterado].ATIVO == 0)
    {

        printf("\nSem registros nesse id!\n");
    }
    else
    {

        printf("\nID: %d", CAR_MODELOS[moduloIdAlterado].MODELO_ID);
        printf("\nNOME: %s", CAR_MODELOS[moduloIdAlterado].NOME);
        printf("\nOBS: %s", CAR_MODELOS[moduloIdAlterado].OBS);

        printf("\nAlterar registro para:\n");
        printf("\n\n\nNOME:");
        gets(CAR_MODELOS[moduloIdAlterado].NOME);
        printf("\nOBS:");
        gets(CAR_MODELOS[moduloIdAlterado].OBS);

        printf("\nDados alterados com sucesso!\n\n");
    }
    sleep(5);
}

void exlcuirModelo()
{
    int moduloIdAlterado;
    char ACEITE[3];
    printf("\nExcluir registro:\n");
    printf("\nQual ID deseja excluir?\n");
    scanf("%d", &moduloIdAlterado);
    fflush(stdin);
    printf("\nid usado: %d\n", moduloIdAlterado);

    printf("\nID: %d", CAR_MODELOS[moduloIdAlterado].MODELO_ID);
    printf("\nNOME: %s", CAR_MODELOS[moduloIdAlterado].NOME);
    printf("\nOBS: %s", CAR_MODELOS[moduloIdAlterado].OBS);
    printf("\nDeseja excluir? (S/N)\n");
    scanf("%c", &ACEITE);
    if (strcmp(ACEITE, "S") == 0)
    {
        CAR_MODELOS[moduloIdAlterado].ATIVO = 0;
        printf("\nRegistrO %d removido com sucesso!\n", moduloIdAlterado);
    }
    else
    {
        printf("\nOperacao cancelada!\n");
    }
}
void pesquisarModelo()
{
    int moduloIdAlterado;

    printf("\nPesquisar registro:\nItens ativos: \n");
    imprimeIdModelos(0);
    printf("\nQual ID deseja pesquisar?\n");
    scanf("%d", &moduloIdAlterado);
    if (CAR_MODELOS[moduloIdAlterado].ATIVO == 0)
    {

        printf("\nSem registros nesse id!\n");
    }
    else
    {
        printf("\n\n");
        printf("\nID: %d", CAR_MODELOS[moduloIdAlterado].MODELO_ID);
        printf("\nNOME: %s", CAR_MODELOS[moduloIdAlterado].NOME);
        printf("\nOBS: %s", CAR_MODELOS[moduloIdAlterado].OBS);
    }
}

void SubMenuModelos(int id, int vetModulo)
{
    char nomeModulo[1][50];
    strcpy(nomeModulo[0], "MODELOS");
    int escolha;
    int moduloIdAlterado;
    char ACEITE[2];
    printf("\n         .:: STSTEMA VEICULOS>%s ::.", nomeModulo[0]);
    SubMenu(id);
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 11:
        insereModelo();
        gravarDados_MODELOS();
        break;
    case 12:

        alteraModelo();
        gravarDados_MODELOS();

        break;
    case 13:
        exlcuirModelo();
        gravarDados_MODELOS();

        break;
    case 14:
        pesquisarModelo();

        break;
    }
}

void gravarDados_MODELOS()
{
    FILE *arq = fopen("BD_MODELOS.txt", "w+");
    int cont = 0;
    while (CAR_MODELOS[cont].ATIVO != 0)
    {
        fprintf(arq, "%i %s %s\n", CAR_MODELOS[cont].MODELO_ID, CAR_MODELOS[cont].NOME, CAR_MODELOS[cont].OBS);
        cont++;
    }
    fclose(arq);
}

void lerDados_MODELOS()
{
    FILE *arq = fopen("BD_MODELOS.txt", "r+");
    int id;

    while (!feof(arq))
    {

        id = procuraIdModelos(0);

        fscanf(arq, "%i %s %s\n", &CAR_MODELOS[id].MODELO_ID, &CAR_MODELOS[id].NOME, &CAR_MODELOS[id].OBS);
        if (CAR_MODELOS[id].MODELO_ID == 0)
        {

            CAR_MODELOS[id].ATIVO = 0;
        }
        else
        {

            CAR_MODELOS[id].ATIVO = 1;
        }
    }
    fclose(arq);
}
