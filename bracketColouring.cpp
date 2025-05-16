#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<char> a(n);
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == '(') l++;
        else if (a[i] == ')') r++;
    }
    if (l != r) {
        cout << -1 << '\n';
        return;
    }

    int left = 0, right = n - 1;
    int balance = 0;
    vector<int> b(n, -1);

    for(int i = 0; i < n; i++){
        if(a[i] == '(') balance++;
        if(a[i] == ')') balance--;
        if(balance < 0) b[i] = 1;
        else if(balance > 0) b[i] = 2;
        else{
            b[i] = b[i - 1];
        }
        
    }

    set<int> s;
for (int i = 0; i < n; i++) {
    s.insert(b[i]);
}

cout <<  s.size() << '\n';
if (s.size() == 1) {
    for (int i = 0; i < n; i++) {
        cout << 1 << " ";
    }
    cout << '\n';
} else {
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << '\n';
}

}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _; cin >> _;
    while (_--) solve();
    return 0;
}
