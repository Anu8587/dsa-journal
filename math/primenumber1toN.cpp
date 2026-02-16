
#include<bits/stdc++.h>
using namespace std; 
#define all(v) v.begin(), v.end() 
typedef long long int ll;
vector<ll> sieve(ll n) 
{ 
	vector<bool> prime(n + 1, true); 
 	prime[0] = false; 
	prime[1] = false; 
	long long int m = sqrt(n); 
 	for (ll p = 2; p <= m; p++) { 
 
	
		if (prime[p]) { 
 
			for (ll i = p * p; i <= n; i += p) 
				prime[i] = false; 
		} 
	} 
 
	vector<ll> ans; 
	for (ll i = 0; i < n; i++) 
		if (prime[i]) 
			ans.push_back(i); 
	return ans; 
} 
 
vector<ll> sieveRange(ll start, ll end) 
{ 
	
	vector<ll> ans = sieve(end); 

	long long int lower_bound_index = lower_bound(all(ans), start) - 
											ans.begin(); 

	ans.erase(ans.begin(), ans.begin() + lower_bound_index); 
 
	return ans; 
} 
 
 
int main() 
{
    ll f,l,r;
 
    vector<ll> a(1000070, 0);
    l = 1 ; 
    r = 100;
    f=0;
    r++;
    ll start = l; 
    ll end = r; 
    vector<ll> ans = sieveRange(start, end); 
    for (auto i : ans) {
    	a[i]=1;
        cout<<i<<endl ; 
    }
	return 0; 
}  