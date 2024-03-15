int kadane(int *arr, int n)
{
    int max_so_far = arr[0], max_ending_here = arr[0];

    for (int i = 1; i < n; i++)
    {
        max_ending_here = max(max_ending_here + arr[i], arr[i]);
        max_so_far = max(max_ending_here, max_so_far);
    }

    return max_so_far;
}