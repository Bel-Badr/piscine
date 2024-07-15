#include <unistd.h>

int count_letters(char c)
{
    int repeat;

    repeat = 1;
    if (c >= 'a' && c<= 'z')
    {
        repeat = c - 'a' + 1;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        repeat = c - 'A' + 1;
    }
    else
    {
        repeat = 1;
    }
    return (repeat);
}

int main (int argc, char **argv)
{
    int repeat;
    int i;
    int j;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            j = 0;
            repeat = count_letters(argv[1][i]);
            while (j < repeat)
            {
                write (1, &argv[1][i], 1);
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}