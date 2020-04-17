int main()
{
    int i, num[21];
    for (i = 0; i < 20; i++)
    {
        printf("Qual numero voce deseja usar para preencher o vetor?\n");
        scanf("%s", &num[i]);
    }
    printf("Desenpilhando numeros fornecidos: \n");
      for (i = 20; i > 0 ; i--)
    {

        printf("%d \t", num[i]);
    }

    return 0;
}