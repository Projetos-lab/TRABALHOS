int main()
{

    int A, B, AUX;
    A = 1;
    B = 3;
    

    printf("\nValor de A %i", A);
    printf("\nValor de B %i", B);

    AUX = A;
    A = B;
    B = AUX;

    printf("\n\n\n trocando... \n");
    printf("\nValor de A %i", A);
    printf("\nValor de B %i", B);

    return 0;
}