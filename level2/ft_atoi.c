int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);
}
#include <stdio.h>
int main()
{
    printf("%d", ft_atoi("0"));
}