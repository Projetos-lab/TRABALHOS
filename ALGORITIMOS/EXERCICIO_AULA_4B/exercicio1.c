#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int i, quad;

    for (i = 15; i <= 200; i++)
    {
        quad = i * i;
        printf("\nO quadrado de %d e: %d ", i, quad);
    }

    return 0;
}

void br()
{
    printf("\n");
}