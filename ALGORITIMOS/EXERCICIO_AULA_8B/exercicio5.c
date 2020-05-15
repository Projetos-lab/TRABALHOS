float converteCelsiusfire(float pTemp);

int main(int argc, char const *argv[])
{
    float temp;
    printf("informe uma temperatutura em Celcius: ");
    scanf("%f", &temp);
    printf("\n a temperatura  convertida e: %f", converteCelsiusFire(temp));
    return 0;
}
float converteCelsiusFire(float pTemp)
{
    return (pTemp - 32) / 1.8;
};
