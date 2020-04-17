int main()
{

    int numero[3], maior, i;

    printf("Digite o numero 1: ");
    scanf("%d", &numero[0]);
    printf("Digite o numero 2: ");
    scanf("%d", &numero[1]);
    printf("Digite o numero 3: ");
    scanf("%d", &numero[2]);
    maior = numero[0];
    for (i = 0, i < 4, i++)
    {
        if (maior < numero[i])
        {
            maior = numero[i];
        }
    }
    printf("\n\nO maior numero digitado e: %d", maior);
    return 0;
}