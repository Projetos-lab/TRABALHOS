#include <stdio.h>
#include <stdlib.h>
//NOTA

/* RESOLVIDO DE FORMA RECURSIVA*/
int fatorial(int fat);
int somafatorial(int som);
int main()
{
    int i, resultado, num, soma;

    printf("\nEntre com um inteiro positivo qualquer: ");

    scanf("%d", &num);

    soma = 0;
    for (i = 1; i <= 15; i++)
    {
        printf("\nEntre com um inteiro positivo qualquer: ");
        scanf("%d", &num);
        resultado = fatorial(num);
        soma += resultado;
        printf("\nA soma dos fatoriais é: %d ", soma);
    }

    return 0;
}

int fatorial(int fat)
{
    if (fat == 0)
    {
        return 1;
    }

    return fat * fatorial(fat - 1);
}

void br()
{
    printf("\n");
}
int somaFatorial(int som)
{
}