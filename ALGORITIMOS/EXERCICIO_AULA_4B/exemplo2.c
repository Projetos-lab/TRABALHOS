#include <stdio.h>
#include <stdlib.h>

void br();
int main()
{
    int num;
    do{
       printf("\nDigite um numero inteiro de 0  a 10"); 
       fflush(stdin);
       scanf("%i", &num);
    }while((num < 0) ||(num >=11 ));


    printf("\nSaiu do laço");
    return 0;
}


void br(){
    printf("\n\n");
}