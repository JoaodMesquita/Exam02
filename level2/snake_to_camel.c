#include <unistd.h>
int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' &&  av[1][i] <= 'z')
				write(1, &av[1][i], 1);
			else if (av[1][i] == '_' )
			{
				i++;
				av[1][i] -= 32;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}