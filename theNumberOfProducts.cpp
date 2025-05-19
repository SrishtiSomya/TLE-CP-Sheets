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
 
   vector<int> pdts;
   pdts.push_back(1);
   for(int i = 0; i < n; i++){
     int x = pdts.back();
     x = x * (a[i]/abs(a[i]));
     pdts.push_back(x); 
   }
   map<int, int> mp;
   for(auto p: pdts){
      mp[p]++;
   }
   int ans1 = 0; 
   int ans2 = 0;
   ans1 += mp[-1]*(mp[-1] - 1)/2 + mp[1]*(mp[1] - 1)/2;
   ans2 += mp[-1]*mp[1];
   cout << ans2 << " " << ans1 << '\n';
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