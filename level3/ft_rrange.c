#include <stdlib.h>
int *ft_rrange(int start, int end)
{
    int len;
    int *range;
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
            range[i] = end--;
        }
        else
            range[i] = end--;
        i++;
    }
    return (range);
}

#include <stdio.h>
int main ()
{
    int start = -5;
    int end = 0;
    int i = 0;
    int *range = ft_rrange(start, end);
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

