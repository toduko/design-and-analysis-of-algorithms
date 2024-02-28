int f1(int n)
{
    int s = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; j *= 2)
        {
            s += i * j;
        }
    }

    return s;
}