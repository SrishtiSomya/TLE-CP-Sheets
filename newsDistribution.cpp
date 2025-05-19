#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n, m;
   cin >> n >> m;
   vector<set<int>> groups;
   vector<vector<int>> users(m);
   map<int, int> group_no;
   for(int i = 0; i < m; i++){
    int l;
    cin >> l;
    for(int j = 0; j < l; j++){
    int user;
    cin >> user;
    users[i].push_back(user);
    }
   }
   int ngroups = 0;
   for(auto u: users){
    int found = 0;
    for(auto user: u){
        if(group_no.find(user) != group_no.end()){
            found = user;
            break;
        }
    }
    if(found == 0){
        ngroups++;
        for(auto user: u){
            group_no[user] = ngroups; 
        }
    }
    else{
        
    }
   }
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