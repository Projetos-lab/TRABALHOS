
float calculaAreaTrig(float pBase,float pAltura);

int main(int argc, char const *argv[])
{
    float base, altura;
    printf("Calculando a area do triangulo\n\n");
    printf("\nInsira a base: ");
    scanf("%f",&base);
    printf("\nInsira a altura: ");
    scanf("%f",&altura);
    
    printf("A area do triangulo é: %f unidade(es)", calculaAreaTrig(base,altura));
    return 0;
}



float calculaAreaTrig(float pBase,float pAltura){
      return pBase * pAltura;
}