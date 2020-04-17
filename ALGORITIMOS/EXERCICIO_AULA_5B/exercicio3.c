int main()
{
    int i;
    float num[26], soma;
    for (i = 1; i <= 25; i++)
    {
        printf("Qual numero voce deseja usar para preencher o vetor?\n");
        scanf("%s", &num[i]);
    }
    printf("soma numeros fornecidos: \n");
    for (i = 20; i >= 1; i--)
    {
        soma += num[i];
    }
    printf("%f", soma);
    return 0;
}