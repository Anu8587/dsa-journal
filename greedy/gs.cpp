#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
 
	ll n;
	cin>>n;vector <ll> p1m,p2m;ll c = 0 ; 
	for(ll i=1;i<=n;i++){
		ll y;cin>>y;
		if(y<0){
			p2m.push_back(abs(y));
		}else{
			p1m.push_back(y);
		}
	}
	vector <ll> p1f,p2f;
	for(ll i=1;i<=n;i++){
		ll y;cin>>y;
		if(y<0){
			p2f.push_back(abs(y));
		}else{
			p1f.push_back(y);
		}
	}
 
	if(p2m.size()>0){
	sort(p2m.begin(),p2m.end());
	}
 
	if(p1m.size()>0){
	sort(p1m.begin(),p1m.end());
	}
 
	if(p2f.size()>0){
	sort(p2f.begin(),p2f.end());
	}
 
	if(p1f.size()>0){
	sort(p1f.begin(),p1f.end());
	}
 
	ll j = 0; 
	ll i = 0 ; 
	while(i<p1f.size() && j<p2m.size()){
 
		if(p2m[j]>p1f[i]){
			c++;j++;i++;
		}else{
			j++;
		}
 
	}
	//cout<<c<<"\n";
 
	j = 0 ; 
	i = 0 ; 
	while(i<p1m.size() && j<p2f.size()){
 
		if(p2f[j]>p1m[i]){
			c++;j++;i++;
		}else{
			j++;
		}
 
	}
 
	cout<<c;
 
 
 
	return 0;
}