#include <stdio.h>
#include "libCesar.c"

no *FILA;
nodetree *arvore;
int cont = 1;
int maior, menor, somaFila, somaArvore;

int geraExercicio()
{
    int num;
    do
    {
        printf("\nEntre com um numero inteiro:");
        scanf("%d", &num);
        //MAIOR QUE ZERO
        if (num > 0)
        {
            //NUMEROS IMPARES
            if (num % 2 == 1)
            {
                if (cont == 1)
                {
                    arvore = maketree(num);
                    cont++;
                }
                else
                {
                    insert_binary_tree(arvore, num);
                }
            }
            //PARES
            else
            {
                qinsert(&FILA, num);
            }
        }
        else if (num < 0)
        //RETORNO SE FOR NEGATIVO
        {
            printf("Erro -001 Entre apenas com numeros positivos!");
            system("pause");
            geraExercicio();
        }
    } while (!num == 0);

    return 0;
}

void percorrer_fila_horrores(no **primeiro)
{
    int num, maiorFila, menorFila,cont = 1;

    while (*primeiro != NULL)
    {
        
        num = qremove(primeiro);
        somaFila += num;
        if (cont == 1){
        	maiorFila = menorFila = num;
        	cont ++;
		}

        if (num > maiorFila)
        {
            maiorFila = num;
        }
        if (num < menorFila)
        {
            menorFila = num;
        }

        printf("%i\t", num);
    }
    maior = maiorFila;
    menor = menorFila;
}
void percorrer_arvore_horroes(nodetree *p)
{
    int num, maiorArvore = maior;
    if (p != NULL)
    {
        percorrer_arvore_horroes(left(p));
        percorrer_arvore_horroes(right(p));
        num = info(p);
        somaArvore += num;

        if (num > maior)
        {
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
    }
}

int main(int argc, char const *argv[])
{
    geraExercicio();
    percorrer_fila_horrores(&FILA);
    percorrer_arvore_horroes(arvore);
    printf("\nSOMATORIA NUMEROS PARES: %d", somaFila);
    printf("\nSOMATORIA NUMEROS IMPARES: %d", somaArvore);
    printf("\nMAIOR NUMERO INFORMADO: %d", maior);
    printf("\nMENOR NUMERO INFORMADO: %d", menor);

    return 0;
}

// (0,5) Somatória de números pares
// (0,5) Somatória de números ímpares
// (0,5) Maior número informado
// (0,5) Menor número informado