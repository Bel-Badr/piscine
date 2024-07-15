#include <unistd.h>


int main (int argc, char **argv)
{
    int i;
    i = 1;
    if (argc == 1)
    {
        write (1, "z", 1);
        write (1, "\n", 1);
    }
    else
    {
        if (argv[i] && argc)
        {
            write (1, "z", 1);
            write (1, "\n", 1);
        }
    }
}