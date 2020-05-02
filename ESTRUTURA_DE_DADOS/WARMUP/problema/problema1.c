#include <stdio.h>
int main(int argc, char const *argv[])
{
    float num, i;

    FILE *ARC;
    ARC = fopen("chuva.in", "r");
    while (!feof(ARC))
    {
        fscanf(ARC, "%f\n", &num);
        printf("%.2f\n", num/25.4);
    }
	 fclose(ARC);
    return 0;
}