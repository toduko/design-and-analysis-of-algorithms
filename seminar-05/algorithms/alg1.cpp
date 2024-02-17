int alg1(int n)
{
    if (n < 2)
        return n;

    int acc = 0;

    for (int i = 0; i < n; ++i)
    {
        acc += i;
    }

    return acc + alg1(n - 1) + alg1(n - 1) + alg1(n - 2);
}