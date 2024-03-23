vector<edge> kruskal(vector<edge> edges, int n) // приемаме, че върховете са от 0 до n
{
    sort(edges.begin(), edges.end());
    vector<edge> mst;

    union_find dsu(n);

    for (const edge &e : edges)
    {
        if (dsu.unify(e.from, e.to))
            mst.push_back(e);
    }

    return mst;
}