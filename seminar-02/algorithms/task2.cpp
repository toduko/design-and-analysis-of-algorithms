int f2(int n)
{
    int s = 0;

    for (int i = 0; i * i < n; i += 3)
    {
        s += f1(n);
    }

    return s;
}