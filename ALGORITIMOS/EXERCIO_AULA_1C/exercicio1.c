#include <stdio.h>


int main(){
   
    int num1;
    int num2;
    int num3,soma;
    float med;
    num1 = 10;
    num2 =  30;
    num3 = 53;

    soma = num1 + num2 + num3;
    med = num1 + num2 + num3 / 3;

    printf("A soma é: %d", soma);
    printf("A media aritimetica é: %f",med);

    return 0;

}
