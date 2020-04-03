#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opção;
    for (;;)
    {
        system("cls");
        printf("[1] - Soma");
        printf("[2] - Subtracao");
        printf("[3] - Multplicacao");
        printf("[4] - Divisao");
        printf("\n\n[9] - Sair");
        printf("\n\n");
        printf("Escolha uma opção: ");
        fflush(stdin);
        scanf("%d",&opção);
        switch (opção)
        {
        case 4:
            printf("\nCodigo nao implementado");
            sleep(1000);
            break;
        case 9:
            printf("\nSaindo do sistema!");
            sleep(1000);
            return 0;
            break;
        
        default:
        printf("\nOpcao invalida!");
            sleep(2000);
            break;
        }

    }
    return 0;
}