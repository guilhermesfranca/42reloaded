#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int nbr;

	nbr = 10;

	ft_ft(&nbr);
	printf("%d\n",nbr);
}
