#include <stdlib.h>
int	*ft_range(int start, int end)
{	
	int len; 
	int	*range;
	int i = 0;

	if (start <= end)
		len = (end - start) + 1;
	else
		len = (start - end) + 1;

	range = malloc(len * sizeof(int));
	if (!range)
		return (NULL);
	while (i < len)
	{
		if (start <= end)
		{
			range[i] = start + i;
		}
		else
			range[i] = start - i;
		i++;
	}
	return (range);
}

#include <stdio.h>
int main ()
{
	int start = 0;
	int end = 5;
	int i = 0;
	int *range = ft_range(start, end);
	int len;

	if (start <= end)
		len = (end - start) + 1;
	else
		len = (start - end) + 1;

	while (i < len)
	{
		printf("%d\n", range[i]);
		i++;
	}			
}