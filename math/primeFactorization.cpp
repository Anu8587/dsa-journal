#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ; 

 
unordered_map<ll,ll> primeFactors(ll n)
{
	unordered_map <ll,ll> a2 ;
	
	while (n % 2 == 0)
	{
		a2[2]++;
		n = n/2;
	}

	for (ll i = 3; i <= sqrt(n); i = i + 2)
	{
		
		while (n % i == 0)
		{
			a2[i]++;
			n = n/i;
		}
	}

	
	if (n > 2)
		a2[n]++;
		
	return a2;
}

int main()
{
	ll n = 18;
	unordered_map <ll,ll> a2 = primeFactors(n);
	for(auto itr=a2.begin();itr!=a2.end();++itr){
		cout<<itr->first<<" "<<itr->second;
		cout<<"\n";
	}
	return 0;
}

