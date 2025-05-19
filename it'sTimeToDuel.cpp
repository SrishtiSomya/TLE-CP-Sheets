#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++){
    cin >> a[i];
   }
   int score = 0;
   for(int i = 0; i < n; i++){
    score += a[i];
   }
   string ans = "NO\n";
   for(int i = 1; i < n; i++){
    if(a[i] == a[i - 1]  && a[i] == 0){
        ans = "YES\n";
    }
   }
   if(score == n){
    ans = "YES\n";
   }
   cout << ans;
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