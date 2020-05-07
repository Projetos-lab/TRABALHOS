void insert_binary_tree(nodetree *p, int x)
{
	if (p!=NULL)
	{
		if (x>=info(p))
			if(right(p)==NULL)
				setright(p, x); // inserção a direita
			else
				insert_binary_tree(right(p),x); // continua a busca
		else
			if(left(p)==NULL)
				setleft(p, x); // inserção a esquerda
			else
				insert_binary_tree(left(p),x); // continua a busca
	}
}

void percorrer_ordem(nodetree *p)
{
	if (p!=NULL)
	{
		percorrer_ordem(left(p));
		printf("%i  ", info(p));
		percorrer_ordem(right(p));
	}
}

void percorrer_preordem(nodetree *p)
{
	if (p!=NULL)
	{
		printf("%i  ", info(p));
		percorrer_preordem(left(p));
		percorrer_preordem(right(p));
	}
}

void percorrer_posordem(nodetree *p)
{
	if (p!=NULL)
	{
		percorrer_posordem(left(p));
		percorrer_posordem(right(p));
		printf("%i  ", info(p));
	}
}

