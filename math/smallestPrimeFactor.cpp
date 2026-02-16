#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll MAXN = 1000000;

vector<ll> spf(MAXN + 1); 
void computeSPF() {
    for (ll i = 2; i <= MAXN; i++) {
        spf[i] = i;
    }

    for (ll i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) { 
            for (ll j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) { 
                    spf[j] = i;
                }
            }
        }
    }
}

int main() {
 
    computeSPF();

    for (ll i = 2; i <= 20; i++) {
        cout << "Smallest prime factor of " << i << " is " << spf[i] << "\n";
    }

    return 0;
}
