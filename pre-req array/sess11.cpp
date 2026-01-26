#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> b(n+1,0);
    map<int,int> k ;
    for(int i =1;i<=n ; i++){
        cin>>b[i];
    }

    for(int i = 1;i<=n;i++){
        k[b[i]] += 1;
    }

    vector<pair<int,int>>g;
    for(auto u:k){
        g.push_back({u.first,u.second});
    }

    int size = g.size();
    int step = 0;

    for(int i = size-1;i>=1;i--){
        g[i-1].second+=g[i].second;
        step+=g[i].second;
        g[i].second = 0;

    }
    cout<<step;
}