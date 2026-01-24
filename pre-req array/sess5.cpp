#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;
  vector<int> arr(n+1);
  for(int i = 1;i<=n;i++){
    cin>>arr[i];
  }
  
  int l,r;
  cin>>l>>r;
  
  //brute
  // for(int i = l;i<=r;i++){
  //   sum+= arr[i];
  // }
  // cout<<sum;

  //prefix sum
  vector<int> prefix(n+1,0);
  for(int i = 1;i<=n;++i){
    prefix[i] = prefix[i-1]+arr[i];
  }

  int sum = prefix[r] - prefix[l-1];
  cout<<sum;
}