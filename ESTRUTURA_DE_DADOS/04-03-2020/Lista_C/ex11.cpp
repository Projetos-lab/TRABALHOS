#include <stdio.h>
#include <stdlib.h>

// Lista C Ex 11

int main() {

    int c, num, maior;

    for ( c=0; c<10; c++ ) {
        printf("Digite um numero: ");
        scanf("%i", &num);

        if ( c == 0 ) {
            maior = num;
        } else {
            if ( num > maior ) {
                maior = num;
            }
        }
    }

    printf("O maior numero digitado foi: %i", maior);

    return 0;
}
