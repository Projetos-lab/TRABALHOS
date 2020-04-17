#include "pilhas.c"

typedef struct {
	int topo;
	int comando[TAMANHO_MAXIMO];
} dados; //pilha

void percorrer_Comandos(int i);
int main()
{
    int opcao;
    dados pilha;
   
    clear(&pilha);
    while (opcao != 5)
    {
        printf("Selecione uma opção:\n");
        printf("\n1 - Ir para frente");
        printf("\n2 - Ir para tras");
        printf("\n3 - Ir para esquerda");
        printf("\n4 - Ir para direita");


        scanf("%s", &opcao);
        push(&pilha, opcao);
        system("cls");
    }

    printf("Seus comandos: \n");
   
        percorrer_Comandos(pop(&pilha));
    

    system("pause");
    return 0;
}

void percorrer_Comandos(int i)
{
    switch (i)
    {
    case 1:
        printf("\n1 - Ir para frente");
    case 2:
        printf("\n2 - Ir para tras");
    case 3:
        printf("\n3 - Ir para esquerda");
    case 4:
        printf("\n4 - Ir para direita");
    }
}




