int binary_search(int *arr, int n, int val)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == val)
            return mid;
        else if (arr[mid] < val)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}