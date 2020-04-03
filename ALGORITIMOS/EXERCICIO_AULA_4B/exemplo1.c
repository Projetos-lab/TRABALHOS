#include <stdio.h>

void br();
int main()
{
    char sexo;
    do{
       printf("\nDigite [M]asculino ou [F]eminino"); 
       fflush(stdin);
       scanf("%c", &sexo);
    }while((sexo != "M") && (sexo != "F" ));


    printf("\nSaiu do laço");
    return 0;
}


void br(){
    printf("\n\n");
}