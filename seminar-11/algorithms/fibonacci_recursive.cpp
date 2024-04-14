int fibonacci_recursive(int n)
{
    if (n < 2)
        return n;

    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}