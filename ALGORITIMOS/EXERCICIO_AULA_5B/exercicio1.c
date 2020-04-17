int main()
{
    int i, num[21];
    for (i = 0; i <=20; i++)
    {
        printf("Qual numero voce deseja usar para preencher o vetor?\n");
        scanf("%s", &num[i]);
    }
    printf("Numeros fornecidos: \n");
    for (i = 0; i <= 20; i++)
    {

        printf("%d \t", num[i]);
    }

    return 0;
}