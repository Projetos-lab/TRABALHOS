float calcular(float A, float B, int C);

int main()
{

    int opcao;
    float num1, num2,resultado;

    printf("Escolha uma opcao: ");
    printf("\n[1] - SOMA");
    printf("\n[2] - SUBTRACAO");
    printf("\n[3] - MULTIPLICACAO");
    printf("\n[4] - DIVISAO");
    printf("\n[5] - SAIR\n");

    scanf("%d", &opcao);

    printf("\n\n\n Qual o primeiro numero que deseja utilizar: ");
    scanf("%f", &num1);
    printf("\n\n\n Qual o segundo numero que deseja utilizar: ");
    scanf("%f", &num2);

    resultado = calcular(num1, num2, opcao);
    printf("Resultado: %.2f",resultado);

    return 0;
}

float calcular(float A, float B, int C)
{

    switch (C)
    {
    case 1:
        return A + B;
    case 2:
        return A - B;
    case 3:
        return A * B;
    case 4:
        return A / B;

    default:
        printf("\nSaindo...");
        
    }
    return 1;
}