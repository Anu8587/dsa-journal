#include<bits/stdc++.h>
 using namespace std;
 /*
int main(){
  int n,q;
  cin>>n;
  cin>>q;
 int array[n];
 for(int i = 0;i<n;i++){
  cin>>array[i];
 }
 for(int i = 0;i<n;i++){
  for(int j = i+1;j<n && j<=i+q;j++){
    if( array[i] == array[j]){
    cout<<"yes";
    }
  }
 }
} */
bool findpair(vector<int>&nums,int k){
  unordered_map<int,int>num;
  for(int i = 0;i<nums.size();i++){
    if(num.find(nums[i]) != num.end() && i - num[nums[i]] <= k){
      return true;
    }
    num[nums[i]] = i;
  }
  return false;
}
int main(){
  int n;
  cin>>n;
  vector<int>nums(n);
  for (int i = 0;i<n;i++){
    cin>>nums[i];
  }
  int k;
  cin>> k;
  if (findpair(nums,k)){
    cout<< "yes";
  
  }else{
    cout<<"no";
  }
 return 0;
}