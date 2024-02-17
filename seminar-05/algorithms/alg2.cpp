int alg2(int n)
{
    if (n < 2)
        return 2;

    int t = 0;
    t += alg2(n / 3);

    for (int i = 2; i < n; i *= 2)
    {
        t++;
    }

    t *= alg2(n / 3);

    return t;
}