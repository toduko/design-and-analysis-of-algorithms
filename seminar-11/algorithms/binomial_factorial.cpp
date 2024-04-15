int binomial_factorial(int n, int k)
{
    if (n < k || n < 0 || k < 0)
        return 0;

    int fact[n + 1];
    fact[0] = 1;

    for (int i = 1; i <= n; ++i)
    {
        fact[i] *= fact[i - 1];
    }

    return fact[n] / (fact[k] * fact[n - k]);
}