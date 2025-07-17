#include <unistd.h>

int is_space(char c)
{
	return(c == 32 || c == 9);
}

int main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while(is_space(av[1][i])) 
			i++;
		while(!is_space(av[1][i]) && av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);	
}
