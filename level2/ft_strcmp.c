int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
#include <stdio.h>
int main()
{
    char *s1 = "joao";
    char *s2 = "joaopedro";

    printf("%d", ft_strcmp(s1, s2));
}