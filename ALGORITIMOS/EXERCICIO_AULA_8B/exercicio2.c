#include <stdio.h>
void mostraniver();
void dashboard();

void SubMenu(int opc)
{
    int escolha;
    int nr = 10 * opc;
    printf("\n          %d1 Inserir                      ", opc);
    printf("\n          %d2 Alterar                      ", opc);
    printf("\n          %d3 Excluir                      ", opc);
    printf("\n          %d4 Pesquisar                    ", opc);
    printf("\n          %d9 Sair                         ", opc);
    scanf("\n%d", &escolha);
    system("cls");
    if (escolha != (nr + 9))
    {
        printf("\nNAO PROGAMADO!", opc);
    }else{
    	printf("\n Voltando ao menu...");
	}
    
    getch();
    dashboard();
}
void SubMenuAlunos(int opc)
{
    printf("\n              .:: ALUNOS ::.        ");
    SubMenu(opc);
}
void SubMenuProf(int opc)
{
    printf("\n          .:: PROFESSORES ::.        ");
    SubMenu(opc);
}
void SubMenuDisciplinas(int opc)
{
    printf("\n          .:: Disiciplinas ::.        ");
    SubMenu(opc);
}
void SubMenuCursos(int opc)
{
    printf("\n              .:: Cursos ::.        ");
    SubMenu(opc);
}

void dashboard()
{

    printf("\n         .:: STSTEMA ACADEMICO ::.        ");
    printf("\n 1.Alunos                                ");
    printf("\n 2.Professores                            ");
    printf("\n 3.Disiciplinas                           ");
    printf("\n 4.Cursos                                 ");
    printf("\n\n 9.Sair                                 ");
}

int main(int argc, char *argv[])
{

    int escolha = 0;
    while (escolha != 9)
    {
        system("cls");
        dashboard();
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            system("cls");
            SubMenuAlunos(1);
            break;
        case 2:
            system("cls");
            SubMenuProf(2);
            break;
        case 3:
            system("cls");
            SubMenuDisciplinas(3);
            break;
        case 4:
            system("cls");
            SubMenuCursos(4);
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
