
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adjList(n);

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int src;
    cin >> src;

    vector<bool> visited(n, false);
    queue<int> st;

    st.push(src);
    visited[src] = true;

    while (!st.empty())
    {
        int node = st.front();
        st.pop();

        for (auto nei : adjList[node])
        {
            if (!visited[nei])
            {
                st.push(nei);
                visited[nei] = true;
            }
        }
    }

    int cnt = 0; 
    for (bool vis : visited)
    {
        if (vis == false)
        {
            cnt++;
        }
    }

    cout << "Not reachable node count: " << cnt << endl;
    return 0;
}