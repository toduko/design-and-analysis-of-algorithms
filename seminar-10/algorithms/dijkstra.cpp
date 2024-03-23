vector<int> dijkstra(vector<vector<pair<int, int>>> g, int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<unsigned long long> dists(g.size(), INF);
    vector<int> parents(g.size(), -1);
    dists[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        int curr = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        for (const pair<int, int> &edge : g[curr])
        {
            int adj = edge.first;
            int weight = edge.second;

            if (dist + weight < dists[adj])
            {
                parents[adj] = curr;
                dists[adj] = dist + weight;
                pq.push({dist + weight, adj});
            }
        }
    }

    return parents;
}