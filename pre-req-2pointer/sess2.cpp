//largest subarray whose sum is  <= k

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll arr[n];

    for(ll i = 0; i<n ;i++){
        cin>>arr[i];
    }

   ll length =0;
    ll sum = 0;
    ll p=0;
    
    for (int i = 0, j = 0; j < n; j++)
{
        sum+=arr[j];
        while(sum>k){
            sum = sum - arr[i];
            i++;
        }

        length= j-i+1;
        p=max(p,length);
    }

cout<<p;
}