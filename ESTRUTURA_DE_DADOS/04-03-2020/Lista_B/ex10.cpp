#include <stdio.h>
#include <stdlib.h>

// Lista B Ex 10

int main () {

    int idade;
    float altura, peso;

    printf("Qual sua idade? ");
    scanf("%i", &idade);
    if ( idade >= 21 && idade <=35 ) {
        printf("Qual sua altura? ");
        scanf("%f", &altura);
        if ( altura >= 1.7 ) {
            printf("Qual seu peso? ");
            scanf("%f", &peso);
            if ( peso >= 60 && peso <= 95 ){
                printf("Inscricao valida para o curso");
            } else {
                printf("Para fazer o curso voce deve pesar entre 60kg e 95kg");
            }
        } else{
            printf("Voce tem que ter mais de 1.7m para fazer o curso!");
        }
    } else {
        printf("Com %i anos voce nao pode fazer o curso de pilotagem!", idade);
    }

    return 0;
}
