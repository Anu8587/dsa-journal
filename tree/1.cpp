#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, int parent, vector<vector<int>> &tree, vector<int> &childCount)
{
    for (int child : tree[node])
    {
        if (child != parent)
        {
            dfs(child, node, tree, childCount);
            childCount[node] += 1 + childCount[child]; 
        }
    }
}
int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int>> tree(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<int> childCnt(n + 1, 0);
    dfs(1, 0, tree, childCnt);
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": " << childCnt[i] << endl;
    }
    return 0;
}