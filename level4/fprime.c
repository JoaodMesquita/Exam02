#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int nb;
	int i = 2;
	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("1");
		while (i <= nb)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb != i)
					printf("*");
				nb = nb / i;
			}
			else
				i++;
		}
		
	}
	printf("\n");
}
