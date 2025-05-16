#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++){
    cin >> a[i];
   }
 
   int b[n];

   for(int i = 0; i < n; i++){
      int low = 0;
      int high = i;
      int mid = low + (high - low)/2;
      int ans = -1;
      while(low <= high){
         mid = low + (high - low)/2;
         int length = i - mid + 1;
         if(a[mid] >= length){
            ans =  mid;
            high = mid - 1;
         }
         else{
            low = mid + 1;
         }
      }
      b[i] = i - ans + 1;
   }
   
   for(auto c: b){
      cout << c << " ";
   }
   cout << "\n";
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