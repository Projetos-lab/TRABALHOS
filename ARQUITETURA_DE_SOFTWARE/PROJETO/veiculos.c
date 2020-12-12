#include <stdio.h>
#include <stdlib.h>

#define QTD 100
#include <string.h>
#include "veiculos.h"

typedef struct
{
    int ATIVO;
    int ID;
    int ANO_FAB;
    int ANO_MODELO;
    char NOME[50];
    char OBS[500];

} VEICULOS;

VEICULOS CAR_VEICULOS[QTD];

int LimparVetoresVeiculos(int cont)
{
    if (cont <= QTD)
    {

        CAR_VEICULOS[cont].ATIVO = 0;

        return LimparVetoresVeiculos(++cont);
    }

    return 1;
}

int procuraIdVeiculos(int cont)
{
    if (cont <= QTD && CAR_VEICULOS[cont].ATIVO == 0)
    {

        return cont;
    }
    if (cont >= QTD)
    {
        return -1;
    }

    return procuraIdVeiculos(++cont);
}

void insereVeiculo()
{
    int moduloID = procuraIdVeiculos(0);
    printf("\nInserir novo registro:\n");
    CAR_VEICULOS[moduloID].ATIVO = 1;
    printf("\nid usado: %d\n", moduloID);
    CAR_VEICULOS[moduloID].ID = moduloID;
    printf("ID: %d", CAR_VEICULOS[moduloID].ID);
    fflush(stdin);

    printf("\nNOME:");
    gets(CAR_VEICULOS[moduloID].NOME);
    printf("\nANO FABRICACAO:");
    scanf("%d", &CAR_VEICULOS[moduloID].ANO_FAB);
    printf("\nANO MODELO:");
    scanf("%d", &CAR_VEICULOS[moduloID].ANO_MODELO);
    printf("\nOBS:");
    gets(CAR_VEICULOS[moduloID].OBS);

    printf("Dados inseridos com sucesso!\n\n");
    printf("\nID: %d", CAR_VEICULOS[moduloID].ID);
    printf("\nNOME: %s", CAR_VEICULOS[moduloID].NOME);
    printf("\nANO FABRICACAO: %d", CAR_VEICULOS[moduloID].ANO_FAB);
    printf("\nANO MODELO: %d", CAR_VEICULOS[moduloID].ANO_MODELO);
    printf("\nOBS: %s", CAR_VEICULOS[moduloID].OBS);
    sleep(5);
}
void alteraVeiculos()
{
    int moduloIdAlterado;
    printf("\nAlterar registro:\n");
    printf("\nQual ID deseja alterar?\n");
    scanf("%d", &moduloIdAlterado);
    fflush(stdin);
    printf("\nid usado: %d\n", moduloIdAlterado);

    if (CAR_VEICULOS[moduloIdAlterado].ATIVO == 0)
    {
        printf("\nSem registros nesse id!\n");
    }
    else
    {
        printf("\nID: %d", CAR_VEICULOS[moduloIdAlterado].ID);
        printf("\nNOME: %s", CAR_VEICULOS[moduloIdAlterado].NOME);
        printf("\nANO FABRICACAO: %d", CAR_VEICULOS[moduloIdAlterado].ANO_FAB);
        printf("\nANO MODELO: %d", CAR_VEICULOS[moduloIdAlterado].ANO_MODELO);
        printf("\nOBS: %s", CAR_VEICULOS[moduloIdAlterado].OBS);

        printf("\nAlterar registro para:\n");
        printf("\n\n\nNOME:");
        gets(CAR_VEICULOS[moduloIdAlterado].NOME);
        printf("\nANO FABRICACAO:");
        scanf("%d", &CAR_VEICULOS[moduloIdAlterado].ANO_FAB);
        printf("\nANO MODELO:");
        scanf("%d", &CAR_VEICULOS[moduloIdAlterado].ANO_MODELO);
        fflush(stdin);
        printf("\nOBS:");
        gets(CAR_VEICULOS[moduloIdAlterado].OBS);
    }
    printf("\nDados alterados com sucesso!\n\n");
    sleep(5);
}

void excluirVeiculo()
{
    int moduloIdAlterado;
    char ACEITE[3];
    printf("\nExcluir registro:\n");
    printf("\nQual ID deseja excluir?\n");
    scanf("%d", &moduloIdAlterado);
    fflush(stdin);
    printf("\nid usado: %d\n", moduloIdAlterado);

    printf("\nID: %d", CAR_VEICULOS[moduloIdAlterado].ID);
    printf("\nNOME: %s", CAR_VEICULOS[moduloIdAlterado].NOME);
    printf("\nANO FABRICACAO: %d", CAR_VEICULOS[moduloIdAlterado].ANO_FAB);
    printf("\nANO MODELO: %d", CAR_VEICULOS[moduloIdAlterado].ANO_MODELO);
    printf("\nOBS: %s", CAR_VEICULOS[moduloIdAlterado].OBS);
    printf("\nDeseja excluir? (S/N)\n");
    scanf("%c", &ACEITE);
    if (strcmp(ACEITE, "S") == 0)
    {
        CAR_VEICULOS[moduloIdAlterado].ATIVO = 0;
        printf("\nRegistrO %d removido com sucesso!\n", moduloIdAlterado);
    }
    else
    {
        printf("\nOperacao cancelada!\n");
    }
}

void pesquisarVeiculo()
{
    int moduloIdAlterado;
    printf("\nPesquisar registro:\nItens ativos: \n");
    imprimeIdModelos(0);
    printf("\nQual ID deseja pesquisar?\n");
    scanf("%d", &moduloIdAlterado);
    if (CAR_VEICULOS[moduloIdAlterado].ATIVO == 0)
    {
        printf("\nSem registros nesse id!\n");
    }
    else
    {
        printf("\n\n");
        printf("\nID: %d", CAR_VEICULOS[moduloIdAlterado].ID);
        printf("\nNOME: %s", CAR_VEICULOS[moduloIdAlterado].NOME);
        printf("\nANO FABRICACAO: %d", CAR_VEICULOS[moduloIdAlterado].ANO_FAB);
        printf("\nANO MODELO: %d", CAR_VEICULOS[moduloIdAlterado].ANO_MODELO);
        printf("\nOBS: %s", CAR_VEICULOS[moduloIdAlterado].OBS);
    }
}

void SubMenuVeiculos(int id, int vetModulo)
{

    char nomeModulo[1][50];
    strcpy(nomeModulo[0], "VEICULOS");
    int escolha, moduloID = procuraIdModelos(0);
    int moduloIdAlterado;
    char ACEITE;
    printf("\n         .:: STSTEMA VEICULOS>%s ::.", nomeModulo[0]);
    SubMenu(id);
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 31:
        insereVeiculo();
        gravarDados_VEICULOS();

        break;
    case 32:
        alteraVeiculos();
        gravarDados_VEICULOS();

        break;
    case 33:
        excluirVeiculo();
        gravarDados_VEICULOS();
        break;
    case 34:
        pesquisarVeiculo();

        break;
    }
}

void gravarDados_VEICULOS()
{
    FILE *arq = fopen("BD_VEICULOS.txt", "w+");
    int cont = 0;
    while (CAR_VEICULOS[cont].ATIVO != 0)
    {

        fprintf(arq, "%i %i %i %s %s\n", CAR_VEICULOS[cont].ID, CAR_VEICULOS[cont].ANO_FAB, CAR_VEICULOS[cont].ANO_MODELO, CAR_VEICULOS[cont].NOME, CAR_VEICULOS[cont].OBS);
        cont++;
    }
    fclose(arq);
}

void lerDados_VEICULOS()
{
    FILE *arq = fopen("BD_VEICULOS.txt", "r+");
    int id;

    while (!feof(arq))
    {

        id = procuraIdVeiculos(0);

        fscanf(arq, "%i %i %i %s %s\n", &CAR_VEICULOS[id].ID, &CAR_VEICULOS[id].ANO_FAB, &CAR_VEICULOS[id].ANO_MODELO, &CAR_VEICULOS[id].NOME, &CAR_VEICULOS[id].OBS);
        if (CAR_VEICULOS[id].ID == 0)
        {

            CAR_VEICULOS[id].ATIVO = 0;
        }
        else
        {

            CAR_VEICULOS[id].ATIVO = 1;
        }
    }
    fclose(arq);
}
