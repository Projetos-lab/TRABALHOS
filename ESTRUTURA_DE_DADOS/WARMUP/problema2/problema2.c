#include <stdio.h>
int main(int argc, char const *argv[])
{
    float num, qtd;
    char nome[30];
    FILE *ARC;
    ARC = fopen("vendidos.in", "r");
    while (!feof(ARC))
    {
        fscanf(ARC, "%s %f %f\n", &nome, &num, &qtd);
        printf("%s %.2f\n", nome, num + (200 * qtd));
    }
    fclose(ARC);
    return 0;
}