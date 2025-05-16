#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n, m;
   cin >> n >> m;
   int a[n][m];
   map<int, int> s;
   for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin >> a[i][j];
        s[a[i][j]]++;
    }
   }
   int ans = 0;
   int n_ = s.size();
    
    int idx = 0;
    map<int, int> key_to_index;
    for (auto& pair : s) {
        key_to_index[pair.first] = idx++;
    }
 
    vector<vector<int>> row(n_);  
    vector<vector<int>> col(n_);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int key = a[i][j];
            int mapped_idx = key_to_index[key];  
            row[mapped_idx].push_back(i);
            col[mapped_idx].push_back(j);
        }
    }

   for(int i = 0; i < n_; i++){
      sort(row[i].begin(), row[i].end());
      sort(col[i].begin(), col[i].end());
   }
   
   for(int i = 0; i < n_; i++){
    for(int j = 0; j < row[i].size(); j++){
        int x = row[i][j];
        ans += (x * (j)) - (x * ( row[i].size() - j  - 1));
    }
   }
   for(int i = 0; i < n_; i++){
    for(int j = 0; j < col[i].size(); j++){
        int x = col[i][j];
        ans += (x * (j)) - (x * ( col[i].size() - j- 1));
    }
   }
   cout << ans << "\n";
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