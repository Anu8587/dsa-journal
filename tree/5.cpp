#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &tree, vector<int> &height, vector<bool> &vis, int src, int height[src] ) {
    vis[src] = true;

    for(auto node: tree[src]) {
        if(!vis[node]) {
            height[node] = height[src]+1;
            vis[node] = true;
            dfs(tree,height,vis,node,height[node]);
        }
    }
}
int main() {

    int n;
    cin>>n;
    vector<vector<int>> tree(n+1);
    for(int i=1;i<=n-1;i++) {
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<int> height(n+1);
    vector<bool> vis(n+1, false);

    height[1] = 0;

    dfs(tree, height,vis,1,height[1]);

    for(int i=1;i<=n;i++) {
        cout<<height[i]<<" ";
    }
    cout<<endl;
    return 0;
}
