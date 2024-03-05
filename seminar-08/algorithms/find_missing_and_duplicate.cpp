pair<int, int> find_missing_and_duplicate(int *arr, int n)
{
    int sum = (n * (n + 1)) / 2;
    int sq_sum = (n * (n + 1) * (2 * n + 1)) / 6;

    int arr_sum = 0;
    int arr_sq_sum = 0;

    for (int i = 0; i < n; ++i)
    {
        arr_sum += arr[i];
        arr_sq_sum += arr[i] * arr[i];
    }

    int dup = ((arr_sum - sum) + (arr_sq_sum - sq_sum) / (arr_sum - sum)) / 2; // (S1 + S2 / S1) / 2 
    int miss = dup - arr_sum + sum; // dup - S1

    return {dup, miss};
}