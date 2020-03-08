#include <stdio.h>

int main()
{
    int N;

    printf("Entre com um numero qualquer: \n");
    scanf("%d", &N);

    N = N * N;

    printf("O quadrado desse numero e: %d", N);

    return 0;
}