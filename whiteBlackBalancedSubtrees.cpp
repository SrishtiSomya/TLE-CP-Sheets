#include <bits/stdc++.h>
using namespace std;
#define int long long int

int n;
char b[4000 + 1];
vector<vector<int>> nodes;
int ans;

pair<int, int> subtrees(int idx){
  
    int B = 0;
    int W = 0;

    for(auto x: nodes[idx]){
        auto P = subtrees(x);
        B += P.first;
        W += P.second;
    }
    
    if(b[idx] == 'B'){
        B++;
    }
    else if(b[idx] == 'W'){
        W++;
    }

    if(B == W) {ans++; }
 
    return make_pair(B, W);
}
void solve(){
   cin >> n;
   int a[n - 1];
   for(int i = 0; i < n - 1; i++){
    cin >> a[i];
   }
   ans = 0;
   for(int i = 1; i <= n; i++){
    cin >> b[i];
   }
   nodes.clear();
   nodes.resize(n + 1);
   for(int i = 0; i < n - 1; i++){
    nodes[a[i]].push_back(i + 2);
   }
    
    
   subtrees(1);

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