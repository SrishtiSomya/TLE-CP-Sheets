#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a, b, k;
    cin >> a >> b >> k;

    int boys[k], girls[k];
    int degA[a + 1] = {};
    int degB[b + 1] = {};
 
    for (int i = 0; i < k; i++) {
        cin >> boys[i];
        degA[boys[i]]++;
    }
    for (int i = 0; i < k; i++) {
        cin >> girls[i];
        degB[girls[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < k; i++) {
        ans += k - degA[boys[i]] - degB[girls[i]] + 1;
    }

    cout << ans / 2 << "\n";   
}

signed main() {
    int _;
    cin >> _;
    while (_--) solve();
    return 0;
}
