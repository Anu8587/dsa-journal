#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, int parent, int count, const vector<int> &value,
         const vector<vector<int>> &tree, vector<int> &result)
{

    count += value[node]; 
    result[node] = count;

    for (int child : tree[node])
    {
        if (child != parent)
        {
            dfs(child, node, count, value, tree, result);
        }
    }
}

int main()
{
    int n;
    cin >> n; // number of nodes

    vector<vector<int>> tree(n + 1);
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<int> value(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> value[i]; 

    vector<int> result(n + 1, 0);
    dfs(1, 0, 0, value, tree, result);

    for (int i = 1; i <= n; ++i)
    {
        cout << "Node " << i << ": " << result[i] << " ones on path from root\n";
    }

    return 0;
}
