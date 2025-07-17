#include <unistd.h>
int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res);
}

void ft_putnbr(int nb)
{
    char c;
    if(nb > 9)
        ft_putnbr(nb / 10);
    c = nb % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i = 1;
    int n = ft_atoi(av[1]);
    while(i < 10)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(n);
        write(1, " = ", 3);
        ft_putnbr(i * n);
        write(1, "\n", 1);
        i++;
    }
}