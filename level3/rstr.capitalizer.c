/* Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n. */
//" a FiRSt LiTTlE TESt "
#include <unistd.h>
int is_space(char c)
{
    return(c == 32 || c == 9);
}

int is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}

int is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

void capitalizer(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (is_upper(str[i]))
            str[i] += 32;
        if (is_lower(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main (int ac, char **av)
{
    int i = 1;
    if (ac > 1)
	{
		while (av[i])
		{
			capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
