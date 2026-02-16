#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m;

    
    vector<vector<int>> graphMat(n, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graphMat[u][v] = 1;
        graphMat[v][u] = 1; 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cout << graphMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
