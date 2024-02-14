int maximum(int *arr, int n)
{
    if (n == 0)
        return -INF;
    else
        return max(arr[n - 1], maximum(arr, n - 1));
}