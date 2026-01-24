#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int,int> mp;

    int maxfreq = INT_MIN, maxele = 0;
    int minifreq = INT_MAX, miniele = 0;

    for(int i = 0; i < n; i++)
        mp[arr[i]]++;

    for (auto it :mp){
      if(it.second > maxfreq){
        maxfreq = it.second;
        maxele = it.first;
      }
      if(it.second<minifreq){
        minifreq = it.second;
        miniele = it.first;
      }
    }

    cout << "Max freq element: " << maxele << " (" << maxfreq << ")\n";
    cout << "Min freq element: " << miniele << " (" << minifreq << ")\n";

    return 0;
}

// // time complexity:
// map : balanced BST so insert/access o(logk) + n iterations 
// n*log k
// o(nlogn)

// n times for fidning elements 
// so o(nlogn)+o(n)  
// o(nlogn)