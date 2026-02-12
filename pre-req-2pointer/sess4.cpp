// //Given a sorted array of size N; find the number of quadruplets (i,j,k,l) such that -> a[i] + a[j] > k1 && a[k] + a[l] > k2
// //ques to ask:
// will i<j<k<l ----- yes
// always ask whats the nature of the numbers in array


// brute force is running 4 loops 
// tc: o(n^4)

// OPTIMIZED will convert it into o(n2) tc

//---------------BRUTE FORCE--------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n,k1,k2;
//     cin>>n>>k1>>k2;
//     vector<int> arr(n+1);
//     for(int i =1;i<=n;i++){
//      cin>> arr[i];
//     }
//     long long count =0;
    
    

//     for(int i = 1;i<=n;i++){
//         for(int j = i+1;j<=n;j++){
//              for(int k = j+1;k<=n;k++){
//                 for(int l = k+1;j<=n;l++){
//                     if(arr[i]+arr[j]>k1 && arr[k]+arr[l]>k2){
//                         count++;
//                     }
//                 }
//              }
//             }
//         }

//         cout<<count;
//     }



#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
 ll n;
    cin>>n; ll k1,k2;cin>>k1>>k2;
    ll a[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    } ll c = 0 ; 
    
    for(int j=2;j<=n-2;j++){
        ll i = j-1;ll c1 = 0 ; 
        while(i>=1){
            if((a[i] + a[j])>k1){
                c1++;
            }
            i--;
        }
        ll c2 = 0 ; 
        ll k = j + 1 ; 
        ll l = n ; 
        while(k<l){
            if((a[k]+a[l])>k2){
                c2 = c2 + abs(k-l);l--;
            }else{
                k++;
            }
        }
        
        c += c1*c2;
    }
    cout<<c;
    return 0;
}