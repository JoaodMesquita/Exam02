#include <stdlib.h>
#include <unistd.h>

int is_space(char c)
{
    return (c <= 32);
}

int count_words(char *str)
{
	int i = 0;
	int word = 0;

	while (str[i])
	{
		while (is_space(str[i]) && str[i])
			i++;
		if (str[i])
			word++;
		while (!is_space(str[i]))
			i++;
	}
	return (word);
}

char *ft_strdup(char *str)
{
	char *ptr;
	int i = 0;
	while(str[i])
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	if(!ptr)
		return (NULL);
	i = 0;
	while(str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char **fill_words(char **s, char *str)
{
	int word = 0;
	int i = 0;

	while (word < count_words(str)) 
	{
		while(str[i])
			i++;
		if(str[i] && !is_space(str[i]))
		{
			s[word] = ft_strdup((char *)&str[i]);
		}
		while(str[i] && !is_space(str[i]))
			i++;
		word++;
	}
	s[word] = '\0';
	return (s);
}
char	**ft_split(char *str)
{
	char **s;
	int size;
	
	size = count_words(str);
	s = malloc((size + 1) * sizeof(char *));
	if(!s)
	return (NULL);
	return (fill_words(s, str));
}

#include <stdio.h>
int main ()
{
	char *str = " eu estou aqui";
	char **array;
	int	i = 0;

	array = ft_split(str);
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	free(array);
}
//Write a function that takes a string, splits it into words, and returns them as
//a NULL-terminated array of strings./
//A "word" is defined as a part of a string delimited either by spaces/tabs/new
//lines, or by the start/end of the string.

//" eu estou aqui \n"
