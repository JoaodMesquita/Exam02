int max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int result = tab[0];
    
    if(len > 0)
    {
        while (i < len)
        {
            if(tab[i] > result)
                result = tab[i];
            i++;
        }
        return (result);
    }
    return(0);
}
#include <stdio.h>
int main()
{
    int tab[] = {7, 2, 10, 3, 23};
    printf("%d", max(tab, 5));
}