//Find count of largest/smallest subarray with sum k in Given Array

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


  unordered_map<int,int> first;
  unordered_map<int,int> last;

  int sum = 0;
  int maxlen = 0;
  int minlen = INT_MAX;

  first[0] = -1;
  last[0] = -1;
  
  int maxCount = 0;
int minCount = 0;


  for(int j = 0;j<n;j++){
    sum += arr[j];

    if(first.find(sum-k) != first.end()){
        int i = first[sum-k] +1;
        int len = j - i + 1;
    if(len > maxlen){
    maxlen = len;
    maxCount = 1;      
}
else if(len == maxlen){
    maxCount++;        
}

    }
    if(last.find(sum - k) != last.end()){
            int i = last[sum - k] + 1;
            int len = j - i + 1;
if(len < minlen){
    minlen = len;
    minCount = 1;      
}
else if(len == minlen){
    minCount++;        

        }

    if(first.find(sum) == first.end()){
        first[sum] = j;
    } 
    last[sum] = j;  
  }
}

// brute force
//   int maxlen = 0;
//   pair<int,int> result ={-1,-1};

//   for(int i = 0;i<n;++i){
//     int curr=0;
//     for(int j = i;j<n;++j){
//         curr+=arr[j];
//         if(curr == k && (j-i+1)>maxlen){
//             maxlen = j-i+1;
//             result ={i+1,j+1};
//         }
//     }
//   }
//   cout<<result.first<<result.second;
  
}