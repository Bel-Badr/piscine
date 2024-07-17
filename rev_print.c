#include <unistd.h>

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

char    *rev_print(char *str)
{
    int i;
    int j;

    j = ft_strlen(str);
    i = j - 1;
    while (i >= 0 && str[i])
    {
        write (1, &str[i], 1);
        i--;
    }
    return (str);
}

int main ()
{
    rev_print("hello world");
}



// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Beware that the string wont be modified.

// Your function must be declared as follows:

// char    *rev_print(char *str);

// examples :
// int main()
// {
//     rev_print("hello world");
//     rev_print("");
//     rev_print("    ");
// }


// #include <unistd.h>
// char *rev_print(char *str)
// {
//     int i;
    
//     i = 0;
//     while(str[i])
//     {
//         i++;
//     }
   
//     while(i >= 0)
//     {
//         write(1, &str[i], 1);
//         i--;
//     }
//     return (str);
// }

