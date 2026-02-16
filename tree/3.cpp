#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, int parent, int onesSoFar,
         vector<int> &values, vector<vector<int>> &tree,
         vector<int> &result)
{

   
    int currentCount = onesSoFar + values[node];
    result[node] = currentCount;

    for (int child : tree[node])
    {
        if (child != parent)
        {
            dfs(child, node, currentCount, values, tree, result);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> tree(n + 1);
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    
    vector<int> values(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> values[i];
    }

    vector<int> result(n + 1, 0);
    dfs(1, 0, 0, values, tree, result);

   
    for (int i = 1; i <= n; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
