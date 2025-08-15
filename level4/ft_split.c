#include <stdlib.h>
int is_space(char c)
{
    return (c == 32 || c == 9 || c == '\n');
}
int count_words(char *str)
{
    int i = 0;
    int word = 0;
    while(str[i])
    {
        while(is_space(str[i]))
            i++;
        if((str[i]))
        {
            word++;
            while(str[i] && !is_space(str[i]))
                i++;
        }   
    }
    return (word);
}

int word_size(char *str)
{
    int i = 0;
    while (str[i] && !is_space(str[i]))
        i++;
    return (i);
}

char *fill_word(char *str)
{
    char    *word;
    int    len;
    int i = 0;

    len = word_size(str);
    word = malloc((len + 1) * sizeof(char));
    if(!word)
        return (NULL);
    while (str[i] && !is_space(str[i]))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return(word);
}

char    **ft_split(char *str)
{
    char    **split;
    int len;
    int i = 0;
    int j = 0;

    len = count_words(str);
    split = malloc((len + 1) * sizeof(char *));
    if(!split)
        return (NULL);
    while (str[j])
    {
        while (str[j] && is_space(str[j]))
            j++;
        if(str[j])
        {
            split[i] = fill_word(&str[j]);
            i++;
        }
        j += word_size(&str[j]);
    }
    split[i] = NULL;
    return (split);
}
#include <stdio.h>
int main()
{
    char *str = "  ola sou o joao  ";
    char **array;
    int i = 0;

    array = ft_split(str);
    while(array[i])
    {
        printf("%s\n", array[i]);
        i++;
    }
}