#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    int start = 1, end = n;
    int turn = 1;
    bool reversed = false;

    long long p1 = 0, p2 = 0;

    while (start <= end) {
        int selected;

        if (turn % 2 != 0) {  
            if (!reversed) {
                selected = b[start];
                p1 += selected;
                start++;
            } else {
                selected = b[end];
                p1 += selected;
                end--;
            }
        } else {  
            if (!reversed) {
                selected = b[start];
                p2 += selected;
                start++;
            } else {
                selected = b[end];
                p2 += selected;
                end--;
            }
        }

        if (selected % 2 == 0) {
            reversed = !reversed;
        }

        turn++;
    }

    cout << (p1 - p2) ;

    return 0;
}
