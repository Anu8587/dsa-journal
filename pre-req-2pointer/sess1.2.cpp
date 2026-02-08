// number of subarrays whose count of distinct  number <=k

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    
    ll k;
    cin>>k;

    vector<ll> arr(n);
    for(ll i = 0;i<n;i++){
        cin>>arr[i];
    }

    ll count = 0;
    unordered_map<ll ,ll > mp;

    for(ll i =0,j=0;j<n;j++){
        mp[arr[j]]++;
        ll d = mp.size();
        while(d>k){
            mp[arr[i]]--;
            if(mp[arr[i]] == 0){
                mp.erase(arr[i]);
            }
            i++;
        }
        count+=j-i+1;
    }

    cout<<count;

}