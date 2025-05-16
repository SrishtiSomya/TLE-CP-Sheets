#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n, k;
   cin >> n >> k;
   int a[n];
   for(int i = 0; i < n; i++){
    cin >> a[i];
   }
   int ans = 0;
   int i = 1;
   int state = 0;
   while(i < n){
    int len = 1;
    while(len < k + 1 && i < n){
      if(!(2*a[i] > a[i - 1])){
         i++;
         break;
      }
      i++;
      len++;
    }
    if(len == k + 1){
      ans++;
      while(i < n){
         if(2 * a[i] > a[i -  1]){
            ans++;
            i++;
         }
         else{ 
            break;
         }
      }
    }
   }
   cout << ans << '\n';
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