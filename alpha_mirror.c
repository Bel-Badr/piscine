#include <unistd.h>

void    alpha_mirror(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = 'z' - (c - 'a');
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c = 'Z' - (c - 'A');
    }
    write (1, &c, 1);
}

int main (int argc, char **argv)
{
    int i;

    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            alpha_mirror(argv[1][i]);
            i++;
        }
    }
    write (1, "\n", 1);
}