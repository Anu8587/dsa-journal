// Given two arrays A and B -> find the number of valid pairs (A[i],B[j]) such that B[j] is multiple of A[i] 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define fo(i, start, end) for (ll i = start; i <= end; i++)
#define pfo(i, end, start) for (ll i = end; i >= start; i--)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sortall(v) sort(all(v))
#define sumv(v) accumulate(all(v), 0LL)
int main(){
	
	ll n;cin>>n;
	ll a[n+1]={0};ll b[n+1]={0};unordered_map <ll,ll> mapA,mapB;
	fo(i,1,n){
		cin>>a[i];mapA[a[i]]++;
	}
	fo(i,1,n){
		cin>>b[i];mapB[b[i]]++;
	}
	ll p = 0 ; 
	for(auto itr = mapA.begin();itr!=mapA.end();++itr){
		ll curr = itr->first; ll d = 0 ; 
		ll j = curr;
		while(j<=1000000){
			d = d + mapB[j];
			
			j = j + curr;
		}
		d = (d*mapA[curr]);
		
		p = p + d;
	}
	cout<<p;
	
	return 0;
}