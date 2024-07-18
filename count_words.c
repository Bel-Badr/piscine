#include <stdio.h>

int count_words(char *str)
{
    int i = 0;
    int w = 0;

    while(str[i] != '\0')
    {
        if (!(str[i] >= 9 && str[i] <= 13) && str[i] != 32)
        {
            while(!(str[i] >= 9 && str[i] <= 13) && str[i] != 32)
            {
                i++;
            }
            w++;
        }
        if((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
            i++;
        if(str[i] == '\0')
            return w;
    }
    return w;
}
int main()
{
    printf("%d\n", count_words("fdfd fdf  fdfd fdfjkd kj f f "));
}