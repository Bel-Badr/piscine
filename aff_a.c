#include <unistd.h>

int main(int argc,char **argv)
{
    int i;

    i = 1;
    if (argv[i] && argc)
    {
        write (1, "a", 1);
        write (1, "\n", 1);
    }
    else
    {
        write (1, "a", 1);
        write (1, "\n", 1);
    }
}