#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   int c[n];
   int a[n];
   map<int, int> b;
   for(int i = 0; i < n; i++){
    cin >> c[i];
   }
   for(int i = 0; i < n; i++){
    a[i] = (c[i] - 1 - i);
   }
   for(int i = 0; i < n; i++){
    b[a[i]] += c[i];
   }
   map<int, int> freq;
   for(int i = 0; i < n; i++){
    freq[a[i]]++;
   }
   int max_freq = 1;
   int ans = 0;
 
   for(auto x: freq){
    if(b[x.first] > ans){
       ans = b[x.first];
    }
   }
   cout << ans << "\n";
   return;
}
signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int _ = 1;
 //cin >> _;
 while(_--){
  solve();
 }
 return 0;
}