#include "pilhas.c"
void percorrer_Horrores(stack *p);

int main()
{

    stack pilha;
    clear(&pilha);
    int x, y, z;
    x = 12;
    y = 55;
    z = 105;

    push(&pilha, x);

    push(&pilha, y);

    push(&pilha, z);

    percorrer_Horrores(&pilha);
    return 0;
}

void percorrer_Horrores(stack *p) //tranformando a percorrer em recursiva
{

    if (p->topo == -1) // caso base
    {

        system("pause");
    }

    printf("%i\n", pop(p));

    percorrer_Horrores(p); //caso recursivo
}
