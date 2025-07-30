#include <stdlib.h>
int	ft_count_len(int nbr)
{	
	int i = 0;
	if(nbr <= 0)
		i++;
	while(nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int nbr)
{
		char	*str;
		int		len;
		int	i;

		len = ft_count_len(nbr);
		str = malloc((len + 1) * sizeof(char));
		if(!str)
			return (NULL);
		str[len] = '\0';
		i = len - 1;
		if(nbr < 0)
		{
			str[0] = '-';
			nbr = -nbr;
		}
		while (nbr >= 10)
		{
			str[i] = nbr % 10 + '0';
			nbr = nbr / 10;
			i--;
		}
		str[i] = nbr + '0';
		return (str);
}
#include <stdio.h>
int main ()
{
	printf ("%s" , ft_itoa(-112121221));
}
