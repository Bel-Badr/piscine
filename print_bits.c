void	print_bits(unsigned char octet)
{
    int oct;
    int divide;

    oct = octet;
    divide = 128;
    while (divide)
    {
        if (divide <= oct)
        {
            write (1, "1", 1);
            oct %= divide;
        }
        else
        {
            write (1, "0", 1);
        }
        divide /= 2;
    }
}