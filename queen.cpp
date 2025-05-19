#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
   int n;
   cin >> n;
   int parents[n + 1];
   int rude[n + 1];
   int score[n + 1] = {};
   for(int i = 1; i <= n; i++){
    cin >>  parents[i];
    cin >>  rude[i];
   }   
   vector<vector<int>> edges(n + 1);
   int root = -1;
   for(int i = 1; i <= n; i++){
       if(parents[i] == -1) root = i;
       else{
          edges[parents[i]].push_back(i);
       }
   }
   for(int i = 1; i <= n; i++){
    if(rude[i] == 1){
        score[i]++;
        score[parents[i]]++;
    }
   }
  set<int> s;
  for(int i = 1; i <= n; i++){
    if(score[i] == edges[i].size() + 1){
        s.insert(i);
    }
  }
  for(auto ss : s){
    cout << ss << " ";
  }
  if(s.size() == 0){cout << -1 << ' ';}
  cout << "\n";
}

signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int _ =  1;
 //cin >> _;
 while(_--){
  solve();
 }
 return 0;
}