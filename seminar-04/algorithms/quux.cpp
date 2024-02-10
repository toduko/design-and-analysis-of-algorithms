int bar(int n)
{
    return (int)sqrt((double)n * n);
}

int foo(int x, int y)
{
    return (x + y + bar(x - y)) / 2;
}

int quux(int *arr, int n)
{
    int a = arr[0];

    for (int i = 1; i < n; ++i)
    {
        a = foo(a, arr[i]);
    }

    return a;
}