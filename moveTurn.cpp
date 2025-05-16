#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin >> n;
  if(n % 2){
     int x = (n + 1)/2;
     cout << (2 * x *(x + 1)) << "\n";
  }
  else{
    cout << (n/2 + 1) * (n/2 + 1) << "\n";
  }
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