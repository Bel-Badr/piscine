int		max(int* tab, unsigned int len)
{
    int max;

    if (len > 0)
    {
        len--;
        max = tab[len];
        while (len)
        {
            if (tab[len] > max)
                max = tab[len];
            len--;
        }
        return (max);
    }
    return (0);
}