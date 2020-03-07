#include <stdio.h>
#include <stdlib.h>

int main () {

    int x,y,len;
    char lista[30];

    printf("Digite uma palavra: ");
    gets(lista);

    len=strlen(lista);

    printf("\nApalavra inversa e: ");

    for (x=len-1; x>=0; x--){
        printf("%c",lista[x]);
    }

    getch();
    return 0;
}
