int exp(int base, int power)
{
    int result = 1;

    while (power > 0)
    {
        if (power % 2 == 1)
            result *= base;

        power /= 2;
        base *= base;
    }

    return result;
}