#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   map<int, int> ncandy;
   int x;
   for(int i = 0; i < n; i++){
    cin >> x;
    ncandy[x]++;
   }
   map<int, int, greater<int>> fcandy;
   for(auto x: ncandy){
    fcandy[x.second]++;
   }
    int ans = 0;
    int last = LLONG_MAX;
    for (auto x : fcandy) {
        int freq = x.first;
        int count = x.second;  
        while (count-- && last > 0) {
        if(freq == x.first) freq = min(freq, last - 1);
        else freq = freq - 1;
        if (freq <= 0) break;
        ans += freq;
        last = freq;
    }
    }
   
   cout << ans << "\n";
   return;
}
signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int _;
 cin >> _;
 while(_--){
  solve();
 }
 return 0;
}