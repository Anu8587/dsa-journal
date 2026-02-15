#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	
	ll n;cin>>n;ll sum=0;vector <ll> p;
	for(ll i=0;i<n;i++){
		ll a,b;cin>>a>>b; sum = sum - a + b*n;p.push_back(a-b);
	}
	sort(p.begin(),p.end());reverse(p.begin(),p.end()); 
	for(ll j=1;j<=n;j++){
		sum = sum + j*p[j-1];
	}
	
	cout<<sum;cout<<"\n";
	
	
	return 0;
}