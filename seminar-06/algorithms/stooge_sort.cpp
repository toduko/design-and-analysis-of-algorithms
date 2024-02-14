void stooge_sort(int *arr, int l, int h)
{
    if (l >= h)
        return;

    if (arr[l] > arr[h])
    {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
    }

    int t = (h - l + 1) / 3;

    if (t >= 1)
    {
        stooge_sort(arr, l, h - t);
        stooge_sort(arr, l + t, h);
        stooge_sort(arr, l, h - t);
    }
}