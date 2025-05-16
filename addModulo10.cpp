#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   int a[n];
   int allequal = 1;
   int mx = -1;
   for(int i = 0; i < n; i++){
    cin >> a[i];
    if(a[i] % 2) a[i] += a[i]  % 10;
    mx = max(mx, a[i]);
   }
   for(int i = 1; i < n; i++){
    if(a[i] != a[i-1])
    {
        allequal = 0;
        break;
    }
   }
   if(allequal){
    cout << "Yes\n";
    return;
   }
   for(int i = 0; i  < n; i++){
    if(a[i] % 10) a[i] = a[i] + ((mx - a[i])/20)*20;
   }
   
   set<int> s;
   s.insert(a[0]);
   for(int j = 0; j < 5; j++){
        a[0] += a[0] % 10;
        s.insert(a[0]);
   }
   allequal = 1;
   int found = 0;
   for(int i = 1; i < n; i++){
    found = 0;
    for(int j = 0; j < 5; j++){
        if(s.find(a[i]) != s.end()){
        found = 1;
        }
        a[i] += a[i] % 10;
    }
    if(found == 0){
        allequal = 0;
        break;
    }
   }
   if(allequal){
    cout << "Yes\n";
   }
   else{
    cout << "No\n";
   }
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