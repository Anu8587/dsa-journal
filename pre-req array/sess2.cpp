#include<bits/stdc++.h>
using namespace std;

int countpairBrute(const vector<int>&arr, int k){
 int count = 0;
 for(int i =0;i<arr.size();i++){
  for(int j = i+1;j<arr.size(); j++){
    if(arr[i]+arr[j] == k){
      count++;
    }
  }
 }
 return count;
}

int countpairOptimized(const vector<int>&arr, int k){
  unordered_map<int,int> freq; 
  int count = 0;
  for(int j = 0; j<arr.size();++j){
    int comp = k - arr[j];
    if(freq.find(comp)!= freq.end()){
      count+=freq[comp];
    }
    freq[arr[j]]++;
  }

  return count;
  
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);

  for (int i = 0;i<n;i++){
    cin>>arr[i];
  }

  int k;
  cin >> k;
  
  cout<< countpairBrute(arr,k);
  cout<< countpairOptimized(arr,k);

}
  

