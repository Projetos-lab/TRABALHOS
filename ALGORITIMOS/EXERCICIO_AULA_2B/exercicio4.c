#include <stdio.h>

int main()
{
    int X,A,B;

    printf("Entre com um numero qualquer para A: \n");
    scanf("%d", &A);
    printf("Entre com um numero qualquer para B: \n");
    scanf("%d", &B);

    X = A;
    B = A;
    A = X;

    printf("O novo valor de A e B respectavamente é: %d , %d", A,B);

    return 0;
}