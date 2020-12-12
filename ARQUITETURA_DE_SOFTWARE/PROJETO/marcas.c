#include <stdio.h>
#include <stdlib.h>

#define QTD 100
#include <string.h>
#include "marcas.h"

typedef struct
{
    int ATIVO;
    int MARCA_ID;
    char NOME[50];
    char OBS[500];

} MARCAS;

MARCAS CAR_MARCAS[QTD];

int LimparVetoresMarcas(int cont)
{
    if (cont <= QTD)
    {

        CAR_MARCAS[cont].ATIVO = 0;

        return LimparVetoresMarcas(++cont);
    }

    return 1;
}

int procuraIdMarca(int cont)
{
    if (cont <= QTD && CAR_MARCAS[cont].ATIVO == 0)
    {

        return cont;
    }
    if (cont >= QTD)
    {
        return -1;
    }

    return procuraIdMarca(++cont);
}

void insereMarca()
{
    int moduloID = procuraIdMarca(0);
    printf("\nInserir novo registro:\n");
    CAR_MARCAS[moduloID].ATIVO = 1;
    printf("\nid usado: %d\n", moduloID);
    CAR_MARCAS[moduloID].MARCA_ID = moduloID;
    printf("ID: %d", CAR_MARCAS[moduloID].MARCA_ID);
    fflush(stdin);

    printf("\nNOME:");
    gets(CAR_MARCAS[moduloID].NOME);
    printf("\nOBS:");
    fflush(stdin);
    gets(CAR_MARCAS[moduloID].OBS);
    printf("\nNOME: %s", CAR_MARCAS[moduloID].NOME);

    printf("Dados inseridos com sucesso!\n\n");
    printf("\nID: %d", CAR_MARCAS[moduloID].MARCA_ID);
    printf("\nNOME: %s", CAR_MARCAS[moduloID].NOME);
    printf("\nOBS: %s", CAR_MARCAS[moduloID].OBS);
     gravarDados_MARCAS();
    sleep(5);
}

void alteraMarca()
{
    int moduloIdAlterado;
    printf("\nAlterar registro:\n");
    printf("\nQual ID deseja alterar?\n");
    fflush(stdin);
    scanf("%d", &moduloIdAlterado);
    printf("\nopcao selecionda %d\n", moduloIdAlterado);
    printf("\nid usado: %d\n", moduloIdAlterado);

    if (CAR_MARCAS[moduloIdAlterado].ATIVO == 0)
    {
        printf("\nSem registros nesse id!\n");
    }
    else
    {

        printf("\nID: %d", CAR_MARCAS[moduloIdAlterado].MARCA_ID);
        printf("\nNOME: %s", CAR_MARCAS[moduloIdAlterado].NOME);
        printf("\nOBS: %s", CAR_MARCAS[moduloIdAlterado].OBS);

        printf("\nAlterar registro para:\n");
        printf("\n\n\nNOME:");
        gets(CAR_MARCAS[moduloIdAlterado].NOME);
        printf("\nOBS:");
        gets(CAR_MARCAS[moduloIdAlterado].OBS);

        printf("\nDados alterados com sucesso!\n\n");
        sleep(5);
    }
      gravarDados_MARCAS();
}

void removeMarca()
{
    int moduloIdAlterado;
    char ACEITE[3];
    printf("\nExcluir registro:\n");
    printf("\nQual ID deseja excluir?\n");
    scanf("%d", &moduloIdAlterado);
    fflush(stdin);
    printf("\nid usado: %d\n", moduloIdAlterado);
    if (CAR_MARCAS[moduloIdAlterado].ATIVO == 0)
    {
        printf("\nSem registros nesse id!\n");
    }
    else
    {

        printf("\nID: %d", CAR_MARCAS[moduloIdAlterado].MARCA_ID);
        printf("\nNOME: %s", CAR_MARCAS[moduloIdAlterado].NOME);
        printf("\nOBS: %s", CAR_MARCAS[moduloIdAlterado].OBS);
        printf("\nDeseja excluir? (S/N)\n");
        scanf("%c", &ACEITE);
        fflush(stdin);
        if (strcmp(ACEITE, "S") == 0)
        {
            CAR_MARCAS[moduloIdAlterado].ATIVO = 0;
            printf("\nRegistrO %d removido com sucesso!\n", moduloIdAlterado);
        }
        else
        {
            printf("\nOperacao cancelada!\n");
        }
    }
      gravarDados_MARCAS();
}

void pesquisarMarca()
{
    int moduloIdAlterado;
    printf("\nPesquisar registro:\nItens ativos: \n");
    imprimeIdMarcas(0);
    printf("\nQual ID deseja pesquisar?\n");
    scanf("%d", &moduloIdAlterado);
    if (CAR_MARCAS[moduloIdAlterado].ATIVO == 0)
    {
        printf("\nSem registros nesse id!\n");
    }
    else
    {

        printf("\n\n");
        printf("\nID: %d", CAR_MARCAS[moduloIdAlterado].MARCA_ID);
        printf("\nNOME: %s", CAR_MARCAS[moduloIdAlterado].NOME);
        printf("\nOBS: %s", CAR_MARCAS[moduloIdAlterado].OBS);
    }
}

void imprimeIdMarcas(int cont)
{
    if (cont <= QTD && CAR_MARCAS[cont].ATIVO == 1)
    {

        printf("%d - \t", cont);
        imprimeIdMarcas(++cont);
    }
}

void SubMenuMarcas(int id, int vetModulo)
{
    char nomeModulo[1][50];
    strcpy(nomeModulo[0], "VEICULOS");
    int escolha;
    int moduloIdAlterado;
    char ACEITE;
    printf("\n         .:: STSTEMA VEICULOS>%s ::.", nomeModulo[0]);
    SubMenu(id);
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 21:
        insereMarca();
        break;
    case 22:
        alteraMarca();
        break;
    case 23:
        removeMarca();
        break;
    case 24:
        pesquisarMarca();
        break;
    }
}

void  gravarDados_MARCAS()
{
    FILE *arq = fopen("BD_MARCAS.txt", "w+");
    int cont = 0;
    while (CAR_MARCAS[cont].ATIVO != 0)
    {
        fprintf(arq, "%i %s %s\n", CAR_MARCAS[cont].MARCA_ID, CAR_MARCAS[cont].NOME, CAR_MARCAS[cont].OBS);
        cont++;
    }
    fclose(arq);
}

void lerDados_MARCAS()
{
    FILE *arq = fopen("BD_MARCAS.txt", "r+");
    int id;

    while (!feof(arq))
    {

        id = procuraIdMarca(0);

        fscanf(arq, "%i %s %s\n", &CAR_MARCAS[id].MARCA_ID, &CAR_MARCAS[id].NOME, &CAR_MARCAS[id].OBS);
        if (CAR_MARCAS[id].MARCA_ID == 0)
        {

            CAR_MARCAS[id].ATIVO = 0;
        }
        else
        {

            CAR_MARCAS[id].ATIVO = 1;
        }
    }
    fclose(arq);
}
