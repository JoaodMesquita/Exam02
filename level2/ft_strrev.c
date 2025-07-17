char    *ft_strrev(char *str)
{
    int len = 0;;
    int i = 0;
    char temp;
    
    while(str[len])
        len++;
    len--;
    while(i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return(str);
}
#include <stdio.h>
int main()
{
    char str[] = "OLA JOAO";
    ft_strrev(str);
    printf("%s", str);
}