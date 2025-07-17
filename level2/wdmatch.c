#include <unistd.h>
int main(int ac, char **av)
{
    int len = 0;
    int i;
    int j;
    if(ac == 3)
    {
        while (av[1][len])
            len++;
        i = 0;
        j = 0;
        while (av[2][j])
        {
            if(av[1][i] == av[2][j])
                i++;
            j++;
        }
        if (i == len)
            write(1, av[1], i);
    }
    write(1, "\n", 1);
}