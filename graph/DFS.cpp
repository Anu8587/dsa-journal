// DFS on graph

#include <iostream>
#include <vector>
using namespace std;

void dfsOnGraph(vector<bool> &vis, vector<int> &res, int src, vector<vector<int>> &adjList)
{
    vis[src] = true;

    res.push_back(src);

    for (auto node : adjList[src])
    {
        if (!vis[node])
        {
            dfsOnGraph(vis, res, node, adjList);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(m);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int src;
    cin >> src;

    vector<bool> vis(n, false);
    vector<int> res;

    dfsOnGraph(vis, res, src, adjList);

    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}