int foo(int a)
{
    int x = 6, y = 1, z = 0;

    for (int i = 0; i < a; ++i)
    {
        z += y;
        y += x;
        x += 6;
    }

    return z;
}