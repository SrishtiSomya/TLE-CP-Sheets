#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   pair<int, int> segments[n];
   int high = 1e9;
   for(int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    high = max(high, y);
    segments[i] = make_pair(x, y);
   } 
   int low = 0;
   int ans = -1;
   int sl = 0;
   int sr = 0;
   while(low <= high){
     int mid = low + (high - low)/2;
     //checking if mid is possible or not
     {
        int k = mid;
        sl = max(0ll, -k);
        sr = k;
        int isPossible = 1;
        for(int i = 0; i < n; i++){
           int l, r;
           l = segments[i].first;
           r = segments[i].second;
           //checking for overlap
           {
             if(sr < l || r < sl){
                 isPossible = 0;
                 break;
             }
             else{
                 sl = max(l, sl);
                 sr = min(r, sr);
                 sl = max(0ll, sl - k);
                 sr = sr + k;
             }
           }
        }
        if(isPossible){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
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