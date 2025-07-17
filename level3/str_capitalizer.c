#include <unistd.h>

int is_space(char c)
{
    return (c == 32 || c == 9);
}

int is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}

void capitalizer(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (is_lower(str[i]) && i == 0)
            str[i] -= 32;
        if(is_upper(str[i]) && !is_space(str[i - 1]) && i != 0)
            str[i] += 32;
        else if(is_lower(str[i]) && is_space(str[i - 1]) && i != 0)
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;

    if (ac == 1)
        write(1, "\n", 1);
    else
    {
        while (i < ac)
        {
            capitalizer(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
}