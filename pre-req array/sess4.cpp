#include<bits/stdc++.h>
using namespace std;

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

  

}