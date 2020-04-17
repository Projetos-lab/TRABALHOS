#include "filas.c"

// Escreva um programa que leia 10 números informados pelo usuário
// , guarde em um vetor. No final leia o vetor novamente e imprima o maior deles.
void percorrerMaior(queue *q);

int main()
{

    queue fila;
    int i, num;

    for (i = 0; i <= 10; i++)
    {
        printf("Digite o %d.o numero: ", i + 1);
        scanf("%d", &num);

        insert(&fila, num);
    }

    percorrerMaior(&fila);

    return 0;
};

void percorrerMaior(queue *q)
{

    int maior, num;
    // caso base � a pilha vazia,
    // neste caso n�o faz nada

    maior = q->itens[1];

    if (!empty(q))
    {
        // caso recursivo, remove e continua
        // percorrendo
        num = remove(q);
        if (num > maior)
        {
            maior = num;
        }

        printf("%i\t", num);
        percorrer(q);
    }

    printf("O maior numero e: %d", maior);
}