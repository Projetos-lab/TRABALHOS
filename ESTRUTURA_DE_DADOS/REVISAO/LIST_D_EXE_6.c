int main()
{

    int numero[11], maior, i;

    for (i = 0; i < 10; i++)
    {
        printf("digite o numero %i: ", i + 1);
        scanf("%d", &numero[i]);
    }
    maior = numero[0];
    for (i = 0; i < 10; i++)
    {
        if (maior < numero[i])
        {
            maior = numero[i];
        }
    }
    printf("\n\nO maior numero digitado e: %d", maior);
    return 0;
}