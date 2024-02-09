void mult(int **A, int **B, int **C, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int cell_sum = 0;

            for (int k = 0; k < n; ++k)
            {
                cell_sum += A[i][k] * B[k][j];
            }

            C[i][j] = cell_sum;
        }
    }
}