#include <stdlib.h>

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

char    *ft_strdup(char *src)
{
    int i;
    char *p;

    i = 0;
    p = (char *)malloc((ft_strlen(src) + 1) * (sizeof(char)));
    if (p == NULL)
    {
        return (NULL);
    }
    while (src[i])
    {
        p[i] = src[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}