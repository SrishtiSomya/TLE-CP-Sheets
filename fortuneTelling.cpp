#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n, x, y;
   cin >> n >> x >> y;
   int a[n];
   for(int i = 0; i < n; i++){
    cin >> a[i];
   }
   int parity = 0;
   for(int i = 0; i < n; i++){
    parity = parity ^ a[i];
   }
   parity =  parity % 2;
   if(x % 2 == y % 2){
      if(parity == 0){
          cout << "Alice\n";
      }else{
          cout << "Bob\n";
      }
   }
   else{
      if(parity == 0){
         cout << "Bob\n";
      }else{
         cout << "Alice\n";
      }
   }
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