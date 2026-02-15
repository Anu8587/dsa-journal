#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> b(n + 1);          
    vector<ll> prefix(n + 1, 0);  
    ll total_sum = 0;b[0] = -1e18; b[n+1] = 1e18;

    for (ll i = 1; i <= n; i++) {
        cin >> b[i];
        total_sum += b[i];
    }

    sort(b.begin() + 1, b.begin() + n + 1);
    
    
    for(ll i = 1; i <= n; i++){
        prefix[i] = b[i] + prefix[i-1];
    }

    ll q;
    cin >> q;
    while (q--) {
        ll target;
        cin >> target;

        ll low = 1, high = n, g = 0;

        while (low <= high) {
            ll mid = (low + high) / 2;
            if (b[mid] <= target) {
                g = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        ll left_part = target * g - prefix[g];
        ll right_part = (total_sum - prefix[g]) - target * (n - g);

        cout << left_part + right_part << endl;
    }
}