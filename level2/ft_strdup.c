#include <stdlib.h>
char *ft_strdup(const char *s)
{
    char *str;
    int i = 0;
    while(s[i])
        i++;
    str = malloc((i + 1) * sizeof(char));
    if(!str)
        return(NULL);
    i = 0;
    while(s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
#include <stdio.h>
int main()
{
    char *s = "OLA";

    printf("%s", ft_strdup(s));
}