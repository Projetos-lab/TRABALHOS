void hanoi(int n,char origem,char destino,char auxiliar){	

	
	//Verificando apenas quando sobrar o ultimo disco, movendo da base a para a c, não utilizandoa auxiliar;
	// Caso base
	if(n==1){ 
		printf("\nMova o disco 1 da base %c para a base %c",origem ,destino);
		return;
	}

	//Movendo os dicos de A para B, removendo sempre 1 disco usando a auxiliar C
	hanoi(n-1,origem,auxiliar,destino);

	//Movendo os discos de A para C
	printf("\nMova o disco %d da base %c para a base %c",n,origem,destino);


	//Movendo os discos de B para C usando A como auxiliar;
	//Chamando novamente a função para gerar a recursividade
	hanoi(n-1,auxiliar,destino,origem);
}

int main ()
{
	setlocale(LC_ALL, "");
	
	int n;

	printf("Digite o numero de discos : ");
	scanf("%d",&n);
	printf("\n");
	printf("Para resolver a Torre de Hanói faça :\n");

	hanoi(n,'A','C','B');
	printf("\n");

	return 0;
}
