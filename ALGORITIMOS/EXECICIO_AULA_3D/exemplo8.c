#include <stdio.h>

int main ()
{
	int num;
	printf ("digite um numero: ");
	scanf ("%d", &num);
	
	switch (num)
	{
			case 9:
				printf ("\n\no numero e igual a 9.\n");
				break;
				case 10:
					printf("\n\no numero e igual a 10.\n");
					break;
					case 11:
						printf("\n\no numero e igual a 11.\n");
						break;
						
						default:
							printf("\n\no numero nao esta entre 9 e 11\n");
	}
	return(0);
}
