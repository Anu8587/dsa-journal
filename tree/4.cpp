#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& tree, vector<int>& val, vector<int>& subtreeSum, int src, int parent) {
    subtreeSum[src] = val[src]; 
    
    for (auto child : tree[src]) {
        if (child == parent) continue; 
        dfs(tree, val, subtreeSum, child, src);
        subtreeSum[src] += subtreeSum[child];
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> tree(n+1);
    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<int> val(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> val[i]; 
    }

    vector<int> subtreeSum(n+1, 0);
    dfs(tree, val, subtreeSum, 1, -1);

    for (int i = 1; i <= n; i++) {
        cout << subtreeSum[i] << " ";
    }
    cout << endl;
}
