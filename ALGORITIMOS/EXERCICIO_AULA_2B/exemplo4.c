#include <stdio.h>

int main(int arg, char *args[])
{
    int a;
    char b;
    float c;

    printf("\n\nDigite um valor inteiro para a:");
    scanf("%i",&a);
    printf("\n\nDigite um valor char para b:");
    scanf("%s",&b);
    printf("\n\nDigite um valor float para c:");
    scanf("%f",&c);

    printf("\n\n");
    printf("Valor da vairiavel a: %d\n",a);
    printf("Posição da memoria de a: %p\n",&a);
    printf("Valor da vairiavel b: %s\n",b);
    printf("Posição da memoria de b: %p\n",&b);
    printf("Valor da vairiavel c: %f\n",c);
    printf("Posição da memoria de c: %p\n",&c);
    getch();

    return 0;
}