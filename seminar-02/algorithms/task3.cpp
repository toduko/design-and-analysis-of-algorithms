int f3(int n)
{
    int s = 0;

    for (int i = 1; i <= n * n; ++i)
    {
        for (int j = 1; j <= 2 * i; ++j)
        {
            if (j % 2 == 0) s += f1(n);
            else s += f2(n);
        }
    }

    return s;
}