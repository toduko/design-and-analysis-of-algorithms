int pow2(int n) // тук n ще бъде положително
{
    int result = 1;

    for (int i = 0; i < n; ++i)
    {
        result *= 2;
    }

    return result;
}