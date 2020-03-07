#include <stdio.h>
#include <stdlib.h>

// Lista C Ex 9

int main () {

    int valor, fatorial, c;

    printf("Digite um numero: ");
    scanf("%i", &valor);
    fatorial = valor;

    for ( c=1; c!=valor; c++ ) {
        fatorial = fatorial * (valor-c);
    }

    printf("%i", fatorial);
    return 0;
}
