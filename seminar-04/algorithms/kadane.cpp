int kadane(int *arr, int n)
{
    int max_so_far = -INF, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_so_far = max(arr[i], max_so_far + arr[i]);
        max_ending_here = max(max_ending_here, max_so_far);
    }

    return max_so_far;
}