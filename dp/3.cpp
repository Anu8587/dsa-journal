#include <bits/stdc++.h>
using namespace std;

long long maxSumNoConsecutive(vector<int>& a1, vector<int>& a2) {
    int n = a1.size();

    // Base case
    long long prev2 = max(a1[0], a2[0]);

    if (n == 1)
        return prev2;

    long long prev1 = max(prev2, (long long)max(a1[1], a2[1]));

    // DP iteration
    for (int i = 2; i < n; i++) {
        long long currVal = max(a1[i], a2[i]);

        long long curr = max(prev1, currVal + prev2);

        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    vector<int> a1(n), a2(n);

    cout << "Enter elements of Array 1:\n";
    for (int i = 0; i < n; i++)
        cin >> a1[i];

    cout << "Enter elements of Array 2:\n";
    for (int i = 0; i < n; i++)
        cin >> a2[i];

    long long result = maxSumNoConsecutive(a1, a2);

    cout << "Maximum sum = " << result << endl;

    return 0;
}
