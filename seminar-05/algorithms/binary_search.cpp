int binary_search(int *arr, int left, int right, int val)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == val)
        return mid;
    else if (arr[mid] < val)
        return binary_search(arr, mid + 1, right, val);
    return binary_search(arr, left, mid - 1, val);
}