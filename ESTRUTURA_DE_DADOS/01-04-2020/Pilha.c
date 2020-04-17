#include "pilhas.c"
void percorrer_Horrores(stack *p);

int main()
{
    stack pilha;
    clear(&pilha);

    push(&pilha, 12);
    push(&pilha, 55);
    push(&pilha, 150);

    percorrer_Horrores(&pilha);
    return 0;
}
 //tranformando a percorrer em recursiva
void percorrer_Horrores(stack *p)
{
    if (p->topo == -1)
    {
        system("pause");
    }
    printf("%i\n", pop(p)); 
    percorrer_Horrores(p);
}
