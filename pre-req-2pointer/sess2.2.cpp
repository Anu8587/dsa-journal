

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    string s;
    cin>>s;

    multiset<char> g;
    ll p =0;
    for(int i = 0,j=0;j<n;j++){
        g.insert(s[j]);
        ll diff = *g.rbegin()-*g.begin();

        while(diff>k){
            g.erase(g.find(s[i]));
            i++;
            if(!g.empty()){
                diff = *g.rbegin()-*g.begin();
            }
        }

        ll length = j-i+1;
        p = max(p,length);
    }
    cout<<p;


}