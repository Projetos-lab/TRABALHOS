#include <math.h>

float RAIZQUADRADA(int num)
{
    return sqrt(num);
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Qual o numero que deseja calcular a raiz?");
    scanf("%d",&num);
    printf("A raiz quadrada: %d" , RAIZQUADRADA(num));
    return 0;
}
