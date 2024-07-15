#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    int i;
    int x;

    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }

    if (argc == 2)
    {
        i = 0;
        x = ft_strlen(&argv[1][i]);
        i = x - 1;
        while (argv[1][i] != '\0')
        {
            write (1, &argv[1][i], 1);
            i--;
        }
    }
    write (1, "\n", 1);
}