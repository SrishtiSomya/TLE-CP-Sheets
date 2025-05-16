#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n, m;
   cin >> n >> m;
   int a[n + 1];
   int b[n + 1];
   memset(a, 0, sizeof(a));
   memset(b, 0, sizeof(b));
   for(int i = 0; i < m; i++){
    int x;
    cin >> x;
    a[x]++;
   }

   int low = 0;
   int high = -2;
   for(int i = 1; i <= n; i++){
      high = max(high, a[i]);
   }
   vector<int> filled(high + 1, 0);
   for(int i = 1; i <= n; i++){
       filled[a[i]]++;
   }
   for(int i =  high - 1; i > 0; i--){
       filled[i] = filled[i] + filled[i + 1];
   }
 
   int ans = -1;
   while(low <= high){
    int mid = low + (high - low)/2;
    int empty = 0;
    for(int i = 1; i <= n; i++){
       empty += max(0ll, mid - a[i])/2;
    }
    int todo = 0;
    for(int i = mid + 1; i < filled.size(); i++){
        todo += filled[i]; 
    }
    int ispossible = 0;
    if(todo <= empty){
        ispossible = 1;
    }
    if(ispossible){
        ans = mid;
        high = mid - 1;
    }
    else{
        low = mid + 1;
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