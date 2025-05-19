#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> rmd;
    for (int i = 0; i < n; i++) {
        int rem = a[i] % k;
        if (rem != 0) {
            int need = k - rem;
            rmd[need]++;
        }
    }

    int ans = 0;
    for (map<int, int>::iterator it = rmd.begin(); it != rmd.end(); ++it) {
        int need = it->first;
        int count = it->second;
        int time = (count - 1) * k + need;
        ans = max(ans, time);
    }

    cout << (ans == 0 ? 0 : ans + 1) << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin >> _;
    while (_--) {
        solve();
    }
    return 0;
}
