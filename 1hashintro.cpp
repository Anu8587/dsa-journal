# include<bits/stdc++.h>
using namespace std;

/* int main(){
  int n;
  cin>>n;

  int array[n];
  for(int i = 0;i<n;i++){
    cin>>array[i];
  }

  int q;
  cin>>q;
  for(int i = 0;i<q;i++){
    int query;
    cin>>query;

    int count = 0;
    for(int j = 0; j<n;j++){
      if(array[j] == query){
        count++;
      }
    }
    cout<<count;
  }
  return 0;
}

int main(){
  int n,q;
  cin>>n;
  int hash[51]={0};
  int array[n];
  for(int i = 0;i<n;i++){
    cin>>array[i];
    hash[array[i]]++;
  }

  cin>>q;
  for (int i = 0;i<q;i++){
    int query;
    int count = hash[query];
    cout<<count;
  }
  return 0;
}
 */

 // using hash map
 int main(){
 int n,q;
  cin>>n;
 unordered_map<int,int> hash_map;
  int array[n];
  for(int i = 0;i<n;i++){
    cin>>array[i];
    hash_map[array[i]]++;
  }
   cin>>q;
  for (int i = 0;i<q;i++){
    int query;
    int count = hash_map[query];
    cout<<count;
  }
  return 0;
}