#include <stdio.h>
#include <stdlib.h>

float area, valor1, valor2 = 0.0;

float areaRetangulo(float base, float altura)
{
  return base * altura;
}
float areaQuadrado(float lado)
{
  return areaRetangulo(lado, lado);
}
float areaTriangulo(float base, float altura)
{
  return areaRetangulo(base, altura) / 2;
}
float areaCirculo(float raio)
{
  return areaQuadrado(raio) * 3.14;
}
float areaLosango(float diagonalMaior, float diagonalMenor)
{
  return areaRetangulo(diagonalMaior, diagonalMenor) / 2;
}
float areaTrapezio(float baseMaior, float baseMenor)
{
  return areaRetangulo(baseMaior, baseMenor);
}
int main(int argc, char *argv[])
{
  int opc = 0;

  while (opc != 9)
  {
    printf("\n");
    printf("..:: CALCULADORA DE AREAS ::.. \n");
    printf("1. Quadrado  \n");
    printf("2. Retangulo \n");
    printf("3. Triangulo \n");
    printf("4. Circulo   \n");
    printf("5. Trapezio  \n");
    printf("6. Losango   \n");
    printf("9. Sair      \n");
    printf("Digite a opcao desejada: \n");

    scanf("%d", &opc);

    if (opc == 1)
    {
      printf("\ndigite o valor do lado:");
      scanf("%f", &valor1);
      printf("\ndigite outro valor:");

      printf("\nA area do quadrado e: %3.2f \n", areaQuadrado(valor1));
    }
    else if (opc == 2)
    {
      printf("\ndigite o valor da base:");
      scanf("%f", &valor1);
      printf("\ndigite a altura:");
      scanf("%f", &valor2);

      printf("\nA area do retangulo e: %3.2f \n", areaRetangulo(valor1, valor2));
    }
    else if (opc == 3)
    {
      printf("\ndigite o valor da base:");
      scanf("%f", &valor1);
      printf("\ndigite a altura:");
      scanf("%f", &valor2);

      printf("\nA area do triangulo e: %3.2f \n", areaTriangulo(valor1, valor2));
    }
    else if (opc == 4)
    {
      printf("\ndigite um valor:");
      scanf("%f", &valor1);

      printf("\nA area do circulo e: %3.2f \n", areaCirculo(valor1));
    }
    else if (opc == 5)
    {
      printf("\ndigite o valor da base maior:");
      scanf("%f", &valor1);
      printf("\ndigite o valor da base menor:");
      scanf("%f", &valor2);

      printf("\nA area do trapezio e: %3.2f \n", areaTrapezio(valor1, valor2));
    }
    else if (opc == 6)
    {

      printf("\ndigite o valor da diagonal maior:");
      scanf("%f", &valor1);
      printf("\ndigite o valor da diagonal menor:");
      scanf("%f", &valor2);

      printf("\nA area do Losango e: %3.2f \n", areaLosango(valor1, valor2));
    }

    system("PAUSE");
    system("cls");
  }

  return 0;
}