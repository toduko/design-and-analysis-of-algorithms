bool alg(int *arr, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] == arr[j])
                return true;
        }
    }

    return false;
}