#include <unistd.h>

int is_space(char c)
{
	return(c == 32 || c == 9);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
			while(is_space(av[1][i]))
				i++;
			while(av[1][i] || is_space(av[1][i]))
			{
				if (!is_space(av[1][i]))
					write(1, &av[1][i], 1);
				else if (is_space(av[1][i]))
				{
					while (is_space(av[1][i]))
						i++;
					if (av[1][i] == '\0')
						break ;
					else
						write(1, "   ", 3);
					i--;
				}
				i++;
			}
	}
	write(1 , "\n", 1);

}
