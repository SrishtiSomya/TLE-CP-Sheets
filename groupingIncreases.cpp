#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   vector<int> b;
   vector<int> c;
   int a[n];
   for(int i = 0; i < n; i++){
     cin >> a[i];
   }
   b.push_back(a[0]);
   int B, C;
   B = b.back();
   C = 1e9;
   int ans = 0;
   for(int i = 1; i < n; i++){
     B = b.back();
     if(c.size() != 0) C = c.back();
     if(B <= C){
        if(a[i] <= B){
           b.push_back(a[i]);
        }
        else if(a[i] > C){
           ans++;
           b.push_back(a[i]);
        }
        else{
           c.push_back(a[i]);
        }
     }
     else{
        if(a[i] <= C){
           c.push_back(a[i]);
        }
        else if(a[i] > B){
           ans++;
           c.push_back(a[i]);
        }
        else{
           b.push_back(a[i]);
        }
     }
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