#include <unistd.h>

int is_space(c)
{
	return (c == 32 || c == 9);
}

int main(int ac, char **av)
{
	int i = 0;
	int holder = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (av[1][i] && !is_space(av[1][i]))
				i--;
			holder = i - 1;
			i++;
			while(av[1][i] && !is_space(av[1][i]))
			{
				write (1, &av[1][i], 1);
				i++;
			}
			if (holder > 0)
				write(1, " ", 1);
			i = holder;
		}
	}
	write(1, "\n", 1);
}
