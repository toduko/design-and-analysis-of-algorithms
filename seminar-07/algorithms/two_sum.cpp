bool two_sum(int *arr, int n, int target)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        if (arr[left] + arr[right] == target)
            return true;
        else if (arr[left] + arr[right] < target)
            ++left;
        else
            --right;
    }

    return false;
}