#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   int u[n];
   map<int, int> mp;
   for(int i = 0; i < n; i++){
    cin >> u[i];
    mp[u[i]]++;
   }
   int s[n];
   for(int i = 0; i < n; i++){
    cin >> s[i];
   }
   int idx = 0;
   map<int, int> key2idx;
   for(auto s: mp){
    key2idx[s.first] = idx++;
   }
   int n_ = mp.size();
   vector<vector<int>> uni(n_);
   for(int i = 0; i < n; i++){
    uni[key2idx[u[i]]].push_back(s[i]);
   }
   int ans[n] = {0};
   for(int i = 0; i < n_; i++){
    sort(uni[i].begin(), uni[i].end(), greater<int>());
   }
 
   for(int i = 0; i < uni.size(); i++){   
    for(int j = 1; j < uni[i].size(); j++){
        uni[i][j] += uni[i][j - 1];
    }
   }
   for(int i = 0; i < uni.size(); i++){   
    for(int j = 1; j <= uni[i].size(); j++){
        int x = uni[i].size()/j;
        int y = x*j;
        ans[j - 1] += uni[i][y - 1];
    }
   }
   for(int i = 0; i < n; i++){
    cout << ans[i] << " ";
   }
   cout << "\n";
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