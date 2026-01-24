#include<bits/stdc++.h>
using namespace std;

int count (vector<int> &arr,int k){
  unordered_map<int,int> mp;
  int cnt=0;
  for(int j = 0;j<arr.size();j++){
    if(mp.find(arr[j]+k) != mp.end()){
      cnt += mp[arr[j]+k];
    }

    if (k!=0 && mp.find(arr[j]-k) != mp.end()){
      cnt += mp[arr[j]-k];
    }
    mp[arr[j]]++;
  }
  return cnt;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  
  int k;
  cin>>k;
  // brute force o(n2)
  // int count = 0;
  // for(int i = 0; i<n;i++){
  //   for(int j = i+1;j<n;j++){
  //      if (abs(arr[i]-arr[j])==k){
  //       count++;
  //      }
  //   }
  // }
  // cout<< count;


  //hashmap optimized

  cout<<count(arr,k);

}