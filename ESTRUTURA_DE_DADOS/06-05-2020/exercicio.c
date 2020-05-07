#include "arvores.c";
#include "arvoresbinarias.c";

int main(int argc, char const *argv[])
{
    nodetree *arvore;
    int num, cont;

    do
    {
        printf("\nEntre com um numero inteiro:");
        scanf("%d",&num);
        if(cont == 1){
             arvore = maketree(num);
             cont++;
        }else{
        insert_binary_tree(arvore,num);
        }
    } while (!num == 0);

printf("\n\n ordem\n"); percorrer_ordem(arvore);
printf("\n\n ordem\n"); percorrer_preordem(arvore);
printf("\n\n ordem\n"); percorrer_posordem(arvore);


    return 0;
}
