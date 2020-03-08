#include <stdio.h>

int main(int arg, char *args[])
{
    float np1;
    float np2;
    float pim;
    float ms;

    printf("Calculo media semestral: \n\n");

    printf("informe a primeira nota:   \n");
    scanf("%d", &np1);

    printf("informe a segunda nota:   \n");
    scanf("%d", &np2);

    
    printf("informe a nota do trabalho:   \n");
    scanf("%f", &pim);

    ms = (np1*4 + pim*2 + np2*4)/10;

    printf("\n\n");
    printf("A sua media é:", ms);

    getch();

    return 0;
}