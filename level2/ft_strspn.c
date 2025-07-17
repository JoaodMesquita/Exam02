#include <stddef.h>
size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;
    int check;
    while(s[i])
    {
        check = 0;
        j = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
               check = 1;
            j++;
        }
        if (check == 0)
            return(i);
        i++;
    }
    return (i);
}
#include <stdio.h>
int main()
{
    char *s1 = "maejoao";
    char *s2 = "mae";

    printf("%ld", ft_strspn(s1, s2));
}