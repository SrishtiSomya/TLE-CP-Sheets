#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   char sheep[n];
   for(int i = 0; i < n; i++){
    cin >> sheep[i];
   }
   int left[n + 2] = {};
   int right[n + 2] = {};
   set<int> dot;
   for(int i = 0; i < n; i++){
     if(sheep[i] == '*'){
        left[i + 1] = 1;
        right[i + 1] = 1;
     }
     else if(sheep[i] == '.'){
        dot.insert(i + 1);
     }
   }
   for(int i = 1; i <= n; i++){
    left[i] += left[i - 1];
   }
   for(int i = n - 1; i >= 0; i--){
    right[i] += right[i + 1];
   }
   int ans = 0;
   for(auto d: dot){
    ans += min(left[d], right[d]);
   }
   cout << ans << "\n";
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