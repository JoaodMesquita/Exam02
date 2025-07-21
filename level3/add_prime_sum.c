#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while (str[i] >= 9 && str[i] <= 13)
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}	

int is_prime(int nb)
{
	if (nb < 2)
		return (0);
	int i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);

}

int main(int ac, char **av)
{
	if (ac != 2 || ft_atoi(av[1]) <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	int n = ft_atoi(av[1]);
	int sum = 0;
	while (n > 1)
	{
		if (is_prime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
}
