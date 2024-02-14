int exp(int base, int power)
{
    if (power == 0)
        return 1;

    int small = exp(base, power / 2);

    if (power % 2 == 1)
        return small * small * base;
    else
        return small * small;
}