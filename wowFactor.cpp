#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   string s;
   cin >> s;
   int a, c;
   int ans = 0;
   a = c = 0;
   for(int i = 0; i < s.size(); i++){
      if(s[i] == 'v'){
        if(i > 0 && s[i - 1] == 'v'){
         ans += a;
         c++;
        }
      }else if(s[i] == 'o'){
        a += c;
      }
   }
   cout << ans << "\n";
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