#include "pilhas-no.c"
// Crie três listas (pilhas para RA par ou filas para RA ímpar).
// Em seguida, leia números inteiros informados pelo usuário e os guarde separadamente em cada lista.
// Uma deve conter somente números positivos e a outra somente números negativos. O programa deve parar de ler os números quando
// o usuário informar o valor ZERO. Depois da leitura dos valores, exiba os valores das listas, primeiro apresentando os negativos e
// depois os positivos. Durante esta exibição, guarde na terceira pilha todos os números ímpares. No final, exiba todos os valores da
// terceira lista.

no lista1, lista2, lista3;
void percorrer_Horrores(no **topo);

int main(int argc, char const *argv[])
{
    int i, n;

    do
    {
        printf("\n digite um numero ");
        scanf("%d", &n);
        if (n > 0)
        {
            push(&lista1, n);
        }
        if (n < 0)
        {
            push(&lista2, n);
        }

    } while (n != 0);

    printf("\n Valores lista 1: ");
    percorrer_Horrores(&lista1);

    printf("\n Valores lista 2: ");
    percorrer_Horrores(&lista2);

    printf("\n Valores impares lista 3: ");
    percorrer(&lista3);

    return 0;
}

void percorrer_Horrores(no **topo)
{
    while (*topo != NULL)
    {
        int valor;
        valor = pop(topo);

        printf("%i\n", valor);

        if (valor % 2 == 1 || valor % 2 == -1)
        {
            push(&lista3, valor);
        }
    }
}
