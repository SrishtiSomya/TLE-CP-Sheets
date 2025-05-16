#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
   int n;
   cin >> n;
   map<int, int> a;
   string ans = "Yes\n";
   vector<int> bits[n];
   for(int i = 0;  i < n; i++){
    int k;
    cin >> k ;
    bits[i].resize(k);
    for(int j = 0; j < k; j++){
       int x; 
       cin >> x;
       a[x]++;
       bits[i].push_back(x);
     } 
   }

   int count = 0;
   for(int i = 0; i < n; i ++){
      for(auto x: bits[i]){
          if(a[x] == 1){
            count ++;
            break;
          }  
      }
   }
   if(count  == n) ans = "No\n";
   cout << ans ;
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