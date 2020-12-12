#include <string.h>
#include <stdio.h>
#define QTD 100

#include "modelos.c"
#include "marcas.c"
#include "veiculos.c"

//  FILE *arq = fopen("dados10000.txt", "a+");
//    fprintf(arq3, "%i\n", rand() % 100000);
// fclose(arq3);

void SubMenu(int opc)
{

    printf("\n%d1 Inserir                      ", opc);
    printf("\n%d2 Alterar                      ", opc);
    printf("\n%d3 Excluir                      ", opc);
    printf("\n%d4 Pesquisar                    ", opc);
    printf("\n%d9 Sair                         \n\n", opc);
}

void dashboard()
{
    printf("\n          .:: SISTEMA VEICULOS ::.         ");
    printf("\n 1.MODELOS                                ");
    printf("\n 2.MARCAS                                 ");
    printf("\n 3.VEICULOS                               ");
    printf("\n\n 9.Sair                                 \n\n");
}

int main(int argc, char *argv[])
{

    int escolha = 0;
    LimparVetoresModelos(0);
    LimparVetoresMarcas(0);
    LimparVetoresVeiculos(0);
    lerDados_MARCAS();
    lerDados_MODELOS();
    lerDados_VEICULOS();

    while (escolha != 9)
    {
        system("cls");
        dashboard();
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            system("cls");
            SubMenuModelos(1, 0);
            break;
        case 2:
            system("cls");
            SubMenuMarcas(2, 1);
            break;
        case 3:
            system("cls");
            SubMenuVeiculos(3, 2);
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
