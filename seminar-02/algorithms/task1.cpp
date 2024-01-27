int f1(int n)
{
    int s = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; j *= 2)
        {
            s += i * j;
        }
    }

    return s;
}