#include <unistd.h>

int is_space(char c)
{
    return (c == 32 || c == 9);
}

int main(int ac, char **av)
{

    int i = 0;
    if (ac > 1)
    {
        while(av[1][i] && is_space(av[1][i]))
            i++;
        int j = i;
        while(av[1][i] && !is_space(av[1][i]))
            i++;
        while(av[1][i])
        {
            while (av[1][i] && is_space(av[1][i]))
                i++;
            if (av[1][i] && !is_space(av[1][i]))
            {
                while (av[1][i] && !is_space(av[1][i]))
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
        }
        while (av[1][j] && !is_space(av[1][j]))
        {
            write (1, &av[1][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}