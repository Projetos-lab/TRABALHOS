typedef struct nodetree
{
    int info;
    struct nodetree *left;
    struct nodetree *right;
    struct nodetree *father;
} nodetree;

nodetree* maketree(int x)
{
	nodetree *p;
	p = malloc(sizeof(nodetree));
	
	p->info = x;
	p->left = NULL;
	p->right = NULL;
	p->father = NULL;
	
	return p;
}

nodetree* left(nodetree *p)
{
	return p->left;
}

nodetree* right(nodetree *p)
{
	return p->right;
}

nodetree* father(nodetree *p)
{
	return p->father;
}

int info(nodetree *p)
{
	return p->info; 
}

nodetree* brother(nodetree *p)
{ 
	if (father(p)==NULL)
		return NULL;
	
	if (isleft(p))
		return right(father(p));
	else
		return left(father(p));
}


void setleft(nodetree *p, int x)
{
	nodetree *newp;
	if (left(p)==NULL) // ignora se já tiver um filho esquerdo
	{
		newp = maketree(x);
		newp->father = p;
		p->left = newp;
	}
}

void setright(nodetree *p, int x)
{
	nodetree *newp;
	if (right(p)==NULL) // ignora se já tiver um filho direito
	{
		newp = maketree(x);
		newp->father = p;
		p->right = newp;
	}
}

void isleft(nodetree *p)
{	
	if (father(p)==NULL)
		return 0;
	
	return left(father(p)) == p;
}

void isright(nodetree *p)
{
	if (father(p)==NULL)
		return 0;
	
	return right(father(p)) == p;
}

