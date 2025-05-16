#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int a[20] = {};

    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        int x = log2(w);
        a[x]++;
    }

    int height = 0;
    int blocks = 0;

    while (blocks < n) {
        int lwidth = k;

        while (true) {
            bool placed = false;

            for (int i = 19; i >= 0; i--) {
                if (a[i] > 0 && (1 << i) <= lwidth) {
                    a[i]--;
                    lwidth -= (1 << i);
                    blocks++;
                    placed = true;
                    break;
                }
            }

            if (!placed) break;
        }

        height++;
    }

    cout << height << "\n";
}

int main() {
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
