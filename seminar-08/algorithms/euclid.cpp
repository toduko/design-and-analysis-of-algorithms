int euclid(int a, int b) // a >= b
{
    if (b == 0)
        return a;

    return euclid(b, a % b);
}