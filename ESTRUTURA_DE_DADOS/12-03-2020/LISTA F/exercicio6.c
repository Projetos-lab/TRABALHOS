#include <stdio.h>
#define TAM 1

/*6- Considere um pequeno programa para controle de um estacionamento.
a) Escreva uma estrutura para armazenar os dados de uma entrada. Ela deve ser capaz de
armazenar a placa do carro (8 caracteres), a marca (15 caracteres) e a hora de entrada
(5 caracteres). Dê a ela o nome de entrada.

b) Escreva uma instrução que defina uma matriz do tipo entrada chamada vagas, com 50
linhas.

c) Escreva uma função chamada ObterDadosDaVaga. Esta função deve obter os dados de
uma entrada (estrutura definida no item a) e retornar uma variável do tipo entrada
contendo os dados informados.

d) Escreva um programa que utilize a estrutura entrada, o vetor vagas e a função
ObterDadosDaVaga para preencher toda a matriz (os dados devem ser informados pelo
usuário).*/

typedef struct
{
    int HH;
    int MM;
} hr_entrada;

typedef struct
{
    int ativo;
    char placa[9];
    char marca[16];
    hr_entrada hora;

} entrada;

entrada vagas[TAM]; // deixando em escopo global para todas as funções observarem

void dashboard();
int ObterDadosDaVaga();
int validaID();
void limpaVet();

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
            ObterDadosDaVaga();
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

void dashboard()
{

    printf("\n                BEM VINDO!               ");
    printf("\n\n");
    printf("\n          PAST LAB ESTACIONAMENTOS        ");
    printf("\n\n");
    printf("\n=========== PAINEL DE CONTROLE ===========");
    printf("\n=                                        =");
    printf("\n=[1] >>   Incluir entrada                =");
    printf("\n=                                        =");

    printf("\n==========================================\nO que deseja fazer? ");
}

void limpaVet()
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        vagas[i].ativo = 0;
    }
}

int validaID()
{
    register int i;

    for (i = 0; vagas[i].ativo==0 && i < TAM; i++)

        if (i == TAM)
            return -1; //sem disponibillidade

    return i;
}

int ObterDadosDaVaga()
{
    int i, ID;

    ID = validaID();
    if (ID == -1)
    {
        printf("\nDESCULPE, ESTACINAMENTO CHEIO\n");
        system("pause");
    }
    else
    {
        fflush(stdin);
        vagas[ID].ativo = 1;
        printf("\nPlaca: ");
        gets(vagas[ID].placa);

        printf("\nMarca: ");
        gets(vagas[ID].marca);

        printf("\nHora (hh:mm): ");
        scanf("%d %*c %d", &vagas[ID].hora.HH,
              &vagas[ID].hora.MM);

        printf("\n\nOPERACAO REALIZADA COM SUCESSO\n\n");


        printf("\n\n ULTIMO REGISTRO REALIZADO\n\n");
         printf("\nPlaca : %s", vagas[ID].placa);
         printf("\nMarca: %s", vagas[ID].marca);
         printf("\nentrada realizada em: %i:%i\n\n", vagas[ID].hora.HH,vagas[ID].hora.MM );

    }
    system("pause");

    return vagas;
int VAR1,VAR2;


    VAR_1 && VAR2 ? printf("true") : printf("false")
}


VAR_1 && VAR2 ? printf("true"); : printf("false")