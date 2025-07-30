#include <stdlib.h>
int	pico(int nbr)
{	
	int i = 0;
	if(nbr <= 0)
		i++;
	while(nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int nbr)
{
		char	*goncalo;
		int		picole;

		picole = pico(nbr);
		goncalo = malloc((picole + 1) * sizeof(char *));
		if(!goncalo)
			return (NULL);
		goncalo[picole] = '\0';
		if(nbr < 0)
		{
			goncalo[0] = '-';
			
		}
		while (nbr >= 10)
		{
			goncalo[picole] = nbr % 10 + '0';
			nbr = nbr / 10;
			picole--;
		}
		goncalo[picole] = nbr + '0';
		return (goncalo);
}
#include <stdio.h>
int main ()
{
	char *
	ft_itoa(123);

}