struct edge
{
    int from;
    int to;
    int weight;
    friend bool operator<(const edge &e1, const edge &e2) { return e1.weight < e2.weight; }
};