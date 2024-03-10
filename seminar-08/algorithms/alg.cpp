int alg(int *arr, int n)
{
    bool x = true, y = true;

    for (int i = 0; i < n - 1; ++i)
    {
        if (x && arr[i] > arr[i + 1])
            x = false;
        else if (!x && arr[i] < arr[i + 1])
            y = false;
    }

    return y;
}