int main(int argc, char const *argv[])
{
    int vet1[21], i;

    printf("VETOR ORIGINAL\n");
    for (i = 0; i <= 20; i++)
    {
        vet1[i] = i;
        printf("%d -", i);
    }
    printf("VETOR DESORDENADO\n");
    srand(time(NULL));
    for (i = 0; i <= 20; i++)
    {
        printf("%d -", rand() % 21);
    }

    return 0;
}
