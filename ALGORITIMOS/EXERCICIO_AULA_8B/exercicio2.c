#include <stdio.h>
void mostraniver();
void dashboard();

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
            mostraniver();
        case 11:
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

void dashboard()
{

    printf("\n                BEM VINDO!               ");
    printf("\n\n");
    printf("\n=========== PAINEL DE CONTROLE ===========");
    printf("\n=                                        =");
    printf("\n=[1] >>   MOSTRAR ANIVERSARIO            =");
    printf("\n=                                        =");
    printf("\n=[11] >>   Sair                          =");

    printf("\n==========================================\nO que deseja fazer? ");
}

void mostraniver()
{
    system("cls");
    printf("*********************\n* FELIZ ANIVERSARIO *\n*********************");
    getch();
}