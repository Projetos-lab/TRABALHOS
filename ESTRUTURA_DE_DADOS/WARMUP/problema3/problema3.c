#include <stdio.h>

int converteBin(int num);

int main(int argc, char const *argv[])
{
    int num;
  
    FILE *ARC;
    ARC = fopen("decimais.in", "r");
    while (!feof(ARC))
    {
        fscanf(ARC, "%d \n", &num);
        printf("%d \n", converteBin(num));
    }
    fclose(ARC);
    return 0;
}

int converteBin(int num)
{
    if (num == 0)
        return 0;

    return converteBin(num/2)*10 + num%2;
}