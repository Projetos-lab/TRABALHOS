int main(int argc, char const *argv[])
{
    float notas1[100];
    float notas2[100];
    float media[100];
    float somaNota;
    float somaNota2;
    float mediaProva1;
    float mediaProva2;
    char opcao;
    int c, i;
    opcao = 'N';
    c = 0;
    while (opcao != 'S')
    {

        prinf("digite a nota do %d.o aluno na p1: ", c + 1);
        scanf("%f", &notas1[c]);
        prinf("digite a nota do %d.o aluno na p2: ", c + 1);
        scanf("%f", &notas2[c]);
        c++;
    }
    for (i = 0; i <= c; i++)
    {
        media[i] = (notas1[i] + notas2[i]) / 2;
    }
    for (i = 0; i <= c; i++)
    {
        somaNota += notas1[i];
        somaNota2 += notas2[i];
    }
    mediaProva2 =  somaNota2 / c;
    mediaProva =  somaNota / c;

    return 0;
}
//não foi soliciatado a impressao dos vetores