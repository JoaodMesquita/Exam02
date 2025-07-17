#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int seen[256] = {0};
	if( ac == 3)
	{
		while(av[1][i])
		{
			seen[(int)av[1][i]] = 1;
			i++;
		}
		while (av[2][j])
		{
			seen[(int)av[2][j]] = 1;
			j++;
		}
		i = 0;
		while (av[1][i])
		{
			if(seen[(int)av[1][i]])
			{
				write(1, &av[1][i], 1);
				seen[(int)av[1][i]] = 0;
			}
			i++;
		}
		j = 0;
		while (av[2][j])
		{
			if(seen[(int)av[2][j]])
			{
				write(1, &av[2][j], 1);
				seen[(int)av[2][j]] = 0;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
