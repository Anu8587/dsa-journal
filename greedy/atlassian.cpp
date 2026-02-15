#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        
        ll n,c;cin>>n>>c;ll b[n+1] = {0};ll sum = 0 ; 
        for(ll i=1;i<=n;i++){
            cin>>b[i];sum = sum + b[i];
        }
        sort(b+2,b+n+1);ll answer = 0 ; 
        for(ll do_it=1;do_it<=n-1;do_it++){ll sum2=0;
            for(ll j=2;j<=2+do_it-1;j++){
                sum2 = sum2 + b[j];
            }
            ll u1 = (sum-sum2)*(sum2);
            sum2 = 0 ;
            for(ll j=n;j>=n-do_it+1;j--){
                sum2 = sum2 + b[j];
            }
            u1 = min(u1,(sum-sum2)*(sum2));
            //cout<<do_it<<" "<<u1<<"\n";
            if(u1<=c){
                answer = do_it;
            }
            
        }
        cout<<n-answer;
        cout<<"\n";
        
    }
    

}
