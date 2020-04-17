int main(int argc, char const *argv[])
{
    int vet1[11], i;
    int vet2[11];
    int soma[11];

    printf("Valores aleatorios do vetor 1\n");
    for (i = 0; i < 10; i++)
    {
        vet1[i] = rand() % 100;
        printf("%d \t",vet1[i]);
    }

    printf("Valores aleatorios do vetor 2\n");
    for (i = 0; i < 10; i++)
    {
        vet2[i] = rand() % 100;
        printf("%d \t",vet2[i]);
    }

    //somando...
    for (i = 0; i < 10; i++)
    {
        soma[i] = vet1[i] + vet2[i];
    }

    printf("A soma dos valores em vetor\n");
    for (i = 0; i < 10; i++)
    {
        soma[i] = vet1[i] + vet2[i];
        printf("%d \t",soma[i]);
    }
    return 0;
}
