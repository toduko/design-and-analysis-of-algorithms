struct union_find
{
private:
    vector<int> leaders;
    vector<int> sizes;

    int get_leader(int x)
    {
        while (x != leaders[x])
        {
            leaders[x] = leaders[leaders[x]];
            x = leaders[x];
        }

        return x;
    }

public:
    union_find(int n) : leaders(n), sizes(n)
    {
        for (int i = 0; i < n; ++i)
        {
            leaders[i] = i;
            sizes[i] = 1;
        }
    }

    bool unify(int x, int y)
    {
        x = get_leader(x);
        y = get_leader(y);

        if (x == y)
            return false;

        if (sizes[x] < sizes[y])
            swap(x, y);

        leaders[y] = x;
        sizes[x] += sizes[y];

        return true;
    }
};