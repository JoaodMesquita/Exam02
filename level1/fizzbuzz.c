#include <unistd.h>

int ft_putnbr(char i)
{
	int c;

	if (i > 9)
		ft_putnbr(i / 10);
	c = i % 10 + '0';
	write(1, &c, 1);
}
int main(int ac, char **av)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(i);
		i++;
		write(1, "\n", 1);
	}
}
