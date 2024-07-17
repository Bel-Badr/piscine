#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    long v1;
    long v2;
    long answer;

    if (argc == 4)
    {
        v1 = atoi(argv[1]);
        v2 = atoi (argv[3]);
        if (argv[2][0] == '+')
            answer = v1 + v2;
        else if (argv[2][0] == '-')
            answer = v1 - v2;
        else if (argv[2][0] == '*')
            answer = v1 * v2;
        else if (argv[2][0] == '/')
            answer = v1 / v2;
        else
            answer = v1 % v2;
        if(answer >= -2147483648 && answer <= 2147483647)
            printf("%d", (int)answer);
    }
    printf("\n");
}