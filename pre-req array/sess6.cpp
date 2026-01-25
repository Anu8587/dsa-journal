#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;
  vector<int> arr(n+1);
  for(int i = 1;i<=n;i++){
    cin>>arr[i];
  }
  int k;
  cin>>k;
  int count = 0;
  int sum = 0;


  // finally hashmap optimized:
  unordered_map<int,int> mp;
  mp[0] = 1;

  for(int num : arr) {
    sum += num;

    if(mp.find(sum-k) != mp.end()){
      count+=mp[sum-k];
    }
    mp[sum]++;
  }

// better approach but still brute
 /*
  vector<int> prefix(n+1,0);

  for(int i = 1;i<=n;i++){
    prefix[i]=prefix[i-1] + arr[i];
  }
  
  for(int j = 1;j<=n;j++){
    for(int i = 0;i<j;i++){
      if(prefix[i] == prefix[j]-k){
        count++;
      }
    }
  }

*/ 


  /*

  brute force approach
  int count = 0;
  for(int j = 1;j<=n;++j){
   int curr = 0;
   for(int i = j; i>=1; i--){
     curr+=arr[i];
     if(curr==k){
      count++;
     }
   }
  }
   return count;

  */

}