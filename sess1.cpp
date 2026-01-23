#include<bits/stdc++.h>
using namespace std;

bool distanceBrute(const vector<int>&arr, int k){
 int n = arr.size();
 for(int i = 0;i<n;++i){
  for(int j = i+1;j<n && j<= i+k;++j){
    if(arr[i] == arr[j]){
      return true;
    }
  }
 }
 return false;
}

bool distanceOptimized(const vector<int>&arr, int k){
   unordered_map<int, int> numIndices;
 
    for (int i = 0; i < arr.size(); ++i) {
        if (numIndices.find(arr[i]) != numIndices.end() && i - numIndices[arr[i]] <= k) {
            return true;
        }
 
        numIndices[arr[i]] = i;
 
    }
    return false;
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
  
  cout<< distanceBrute(arr,k);
  cout<< distanceOptimized(arr,k);

}
  



