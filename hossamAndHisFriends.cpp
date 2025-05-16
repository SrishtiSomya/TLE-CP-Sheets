#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n, m;
   cin >> n >> m;
   pair<int, int> nfnds[m];
   for(int i = 0; i < m; i++)
   {
    int x, y;
    cin >> x >> y;
    int X, Y;
    X = min(x, y);
    Y = max(x, y);
    nfnds[i] = make_pair(X, Y);
   }
   vector<int> not_friends[n];
   for(auto x: nfnds){
    not_friends[x.first - 1].push_back(x.second - 1);
   }
   int ans = 0;
   for(int i = 0; i < n; i++){
    sort(not_friends[i].begin(), not_friends[i].end());
   }
 
   int set[n];
   
   for(int i = 0; i < n; i++){
        set[i] = n - 1;
        if(not_friends[i].size() != 0){
         set[i] = not_friends[i][0] - 1;
        }
   }

   for(int i = n - 2; i >= 0;  i--){
      set[i] = min(set[i], set[i + 1]);
   }

   for(int i = 0; i < n; i++){
     ans += set[i] - i + 1;
   }
 
   cout << ans << "\n";
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