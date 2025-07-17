#include <unistd.h>

int is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}
int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while(av[1][i])
        {
            if(is_lower(av[1][i]))
                write(1, &av[1][i], 1);
            else if(is_upper(av[1][i]))
            {
                write(1, "_", 1);
                av[1][i] += 32;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}