#include <bits/stdc++.h>
using namespace std;
#define int long long int

int twos[60];

int power(int n){
    if(twos[n] != 0){
        return twos[n];
    }
    if(n < 30) return twos[n] = 1 << n;
    if(n == 0) return 1;
    else if(n % 2){
        return twos[n] = 2*power(n/2)*power(n/2);
    }
    else{
        return twos[n] = power(n/2)*power(n/2);
    }
}
void solve(){
   int n;
   cin >> n;
   int ans = 0;
   for(int i = 0; i < 60; i++){
       ans += n/power(i);
   }  
   cout << ans << "\n";
   return;
}
signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int _;
 cin >> _;
 twos[0] = 1;
 for(int i = 60; i > 0; i--){
    power(i);
 }
 while(_--){
  solve();
 }
 return 0;
}