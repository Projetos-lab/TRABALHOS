#include <stdio.h>

int main()
{
    char placa[8];
    float km, akm = 0, mediakm;
    int i;

    FILE *arq;

    arq = fopen("carros.txt", "r");
    while (!feof(arq))
    {
        fscanf(arq, "%s %f\n", placa, &km);
        akm += km;
        i++;
    }
    fclose(arq);

    mediakm = akm/i;
    printf("media da frota: %f",mediakm);
    return 0;
}
