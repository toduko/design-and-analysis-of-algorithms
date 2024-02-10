int find_majority(int *arr, int n)
{
    int maj = arr[0];
    int cnt = 1;

    for (int i = 1; i < n; ++i)
    {
        if (cnt == 0)
        {
            maj = arr[i];
            cnt = 1;
        }
        else
            cnt += (arr[i] == maj ? 1 : -1);
    }

    return maj;
}