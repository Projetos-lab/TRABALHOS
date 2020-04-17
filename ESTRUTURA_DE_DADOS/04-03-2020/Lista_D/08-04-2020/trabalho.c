#include "filas.c"
void percorrerPar(queue *q);
void percorrerImpar(queue *q);

int main()
{
    int i, num, maior;
    queue fila1, fila2;

    clear(&fila1);
    clear(&fila2);
    i = 0;
    maior = 0;

    while (i >= 0)
    {
        printf("Digite 50 nums: ");
        scanf("%d", &num);
        i = num;
        if (num > maior)
        {
            maior = num;
            insert(&fila1, num);
        }else{
            insert(&fila2, num);
        }
    }
    printf("\nOs numeros pares sao: ");
    percorrerPar(&fila1); percorrerPar(&fila2);
    printf("\nOs numeros impares sao: ");
    percorrerImpar(&fila1); percorrerImpar(&fila2);
    return 0;
}
void percorrerImpar(queue *q)
{
    int num;
    if (!empty(q))
    {
        num = remove(q);
        if ((num % 2) == 1)
        {
            printf("%i\t", num);
            percorrerImpar(q);
        }
    }
}
void percorrerPar(queue *q)
{

    int num;

    if (!empty(q))
    {

        num = remove(q);
        if ((num % 2) == 0)
        {

            printf("%i\t", num);
            percorrerPar(q);
        }
    }
}
