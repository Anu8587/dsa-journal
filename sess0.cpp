#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int maxele, maxc = 0;
    int minele, minc = INT_MAX;

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(array[i] == array[j]) cnt++;
        }

        if(cnt > maxc){
            maxc = cnt;
            maxele = array[i];
        }

        if(cnt < minc){
            minc = cnt;
            minele = array[i];
        }
    }

    cout << "Most frequent: " << maxele << " (count: " << maxc << ")\n";
    cout << "Least frequent: " << minele << " (count: " << minc << ")\n";

    return 0;
}
int main(){
 int n,q;
  cin>>n;
 unordered_map<int,int> hash_map;
  int array[n];
  for(int i = 0;i<n;i++){
    cin>>array[i];
    hash_map[array[i]]++;
  }
   int maxele, maxc = 0;
    int minele, minc = INT_MAX;

for(auto& p: hash_map){
  if(p.second>maxc){
    maxc=p.second;
    maxele=p.first;
  }
  if(p.second<minc){
        minc=p.second;
    minele=p.first;
  }
}
 cout << "Most frequent: " << maxele << " (count: " << maxc << ")\n";
    cout << "Least frequent: " << minele << " (count: " << minc << ")\n";
}