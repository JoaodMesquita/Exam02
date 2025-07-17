#include <stddef.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return (i);
}
#include <stdio.h>
int main()
{
    char *s1 = "joao!234";
    char *s2 = "!234";

    printf("%ld", ft_strcspn(s1, s2));
}