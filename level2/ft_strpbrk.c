char    *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
                return((char *)&s1[i]);
            j++;
        }
        i++;
    }
    return(0);
}
#include <stdio.h>
int main()
{
    char *s1 = "Joao_Pedro";
    char *s2 = "Ja!/&_";

    printf("%s", ft_strpbrk(s1, s2));

}