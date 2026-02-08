//Number of pairs whose absolute diff <= k

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    vector<ll> arr(n);

    for(ll i = 0; i<n ;i++){
        cin>>arr[i];
    }

    ll count = 0;

    sort(arr.begin(),arr.end());
    
    for (int i = 0, j = 0; j < n; j++)
{
        
        while(arr[j]-arr[i]>k){
           
            i++;
        }

        count+= j-i;
    }

cout<<count;
}