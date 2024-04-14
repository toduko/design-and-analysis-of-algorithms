int longest_common_subsequence(char *s1, int n, char *s2, int m)
{
    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; ++i)
    {
        dp[i][0] = 0;
    }

    for (int j = 0; j <= m; ++j)
    {
        dp[0][j] = 0;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[n][m];
}