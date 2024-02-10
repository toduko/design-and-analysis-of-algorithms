int kadane(int *arr, int n)
{
    int m = arr[0], curr_m = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] + curr_m > arr[i])
            curr_m += arr[i];
        else
            curr_m = arr[i];

        if (m < curr_m)
            m = curr_m;
    }

    return m;
}