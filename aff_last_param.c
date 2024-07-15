#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    int j;

    j = 0;
    i = argc - 1;
    if (argc == 1)
    {
        write (1, "\n", 1);
    }
    else
    {
        while (argv[i][j] && argc)
        {
            write (1, &argv[i][j], 1);
            j++;
        }
    }
}