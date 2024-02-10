int num_slopes(int *arr, int n)
{
    int slopes = 1;

    for (int i = 1; i < n; ++i)
    {
        if (arr[i - 1] > arr[i])
            ++slopes;
    }

    return slopes;
}