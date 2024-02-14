void multiply(int A[2][2], int B[2][2]) // записва резултата в A
{
    int res[2][2];
    res[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    res[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    res[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    res[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            A[i][j] = res[i][j];
}

void fib_matrix_exp(int result[2][2], int n)
{
    if (n == 0)
    {
        result[0][0] = result[1][1] = 1;
        result[0][1] = result[1][0] = 0;
        return;
    }

    fib_matrix_exp(result, n / 2);
    multiply(result, result);

    if (n % 2 == 1)
    {
        int fib_matrix[2][2] = {{1, 1},
                                {1, 0}};
        multiply(result, fib_matrix);
    }
}

int fib(int n)
{
    if (n <= 1)
        return n;

    int matrix[2][2];
    fib_matrix_exp(matrix, n - 1);

    return matrix[0][0];
}