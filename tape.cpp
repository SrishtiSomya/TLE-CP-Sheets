#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n, m, k;
   cin >> n >> m >> k;
   int a[n];
   for(int i = 0; i < n; i++){
    cin >> a[i];
   }
   int len = n;
   int cuts = n;
   vector<int> cut;
   for(int i = 1; i < n; i++){
    cut.push_back(a[i] - a[i - 1] - 1);
   }
   sort(cut.begin(), cut.end());
   int i = 0;
   while(cuts > k && i < cut.size()){
    len += cut[i];
    i++;
    cuts--;
   }
   cout << len << "\n";
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