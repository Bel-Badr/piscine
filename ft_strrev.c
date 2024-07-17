#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strrev(char *str)
{
    int i;
    int j;
    int len;
    char tmp;

    i = 0;
    len = ft_strlen(str);
    j = len - 1;
    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}