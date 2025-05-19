#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool compare(pair<int, int> &a, pair<int, int> &b){
    if(a.first*a.second < b.first*b.second){
        return true;
    }
    else return false;
}
void solve(){
   int n, m, a, b;
   cin >> n >> m >> a >> b;
   int ans = 0;
   while(n != 1 || m != 1){
      vector<pair<int, int>> dimensions;
      if(m - b + 1 > 0) dimensions.push_back(make_pair(n, m - b + 1));
      if(n - a + 1 > 0) dimensions.push_back(make_pair(n - a + 1, m));
      dimensions.push_back(make_pair(n, b));
      dimensions.push_back(make_pair(a, m));
      sort(dimensions.begin(), dimensions.end(), compare);
      n = dimensions[0].first; m = dimensions[0].second;
      a = (n + 1) / 2 ;
      b = (m + 1) / 2 ;
      ans ++;
   }
   cout  << ans << "\n";
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