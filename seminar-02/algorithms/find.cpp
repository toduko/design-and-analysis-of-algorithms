int find(int *array, int n, int value)
{
    for (int i = 0; i < n; ++i)
    {
        if (array[i] == value)
            return i;
    }

    return -1;
}