void dfs_helper(const vector<vector<int>> &g, int curr, vector<bool> &visited, vector<int> &result)
{
    result.push_back(curr);
    visited[curr] = true;

    for (const int &neighbour : g[curr])
        if (!visited[neighbour])
            dfs_helper(g, neighbour, visited, result);
}

vector<int> dfs(const vector<vector<int>> &g)
{
    int n = g.size();
    vector<bool> visited(n, false);
    vector<int> result;

    for (int i = 0; i < n; ++i)
        if (!visited[i])
            dfs_helper(g, i, visited, result);

    return result;
}

void bfs_helper(const vector<vector<int>> &g, int start, vector<bool> &visited, vector<int> &result)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int curr = q.front();
        result.push_back(curr);

        q.pop();

        for (const int &neighbour : g[curr])
            if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
            }
    }
}

vector<int> bfs(const vector<vector<int>> &g)
{
    int n = g.size();
    vector<bool> visited(n, false);
    vector<int> result;

    for (int i = 0; i < n; ++i)
        if (!visited[i])
            bfs_helper(g, i, visited, result);

    return result;
}