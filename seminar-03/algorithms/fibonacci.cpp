int fib(int n) // n ще бъде поне 0
{
    if (n < 2)
        return n;

    int a = 0, b = 1;

    for (int i = 1; i < n; ++i)
    {
        int temp = a;
        a = b;
        b = temp + b;
    }

    return b;
}