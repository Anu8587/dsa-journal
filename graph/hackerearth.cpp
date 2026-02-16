#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n, e, src;
    cin >> n >> e;

    vector<vector<int>> adjList(n + 1); 

    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); 
    }

    cin >> src;

    vector<int> dist(n + 1, -1); 
    vector<bool> vis(n + 1, false);
    queue<int> q;

    q.push(src);
    dist[src] = 0;
    vis[src] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int nei : adjList[node])
        {
            if (!vis[nei])
            {
                q.push(nei);
                vis[nei] = true;
                dist[nei] = dist[node] + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }

    cout << endl;
    return 0;
}
