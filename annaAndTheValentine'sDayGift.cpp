#include <bits/stdc++.h>
using namespace std;
#define int long long int

pair<int, int> compute(int n){
    int digits = 0;
    int zeros = 0;
    int back = 1;
    while(n > 0){
        if(back && n % 10 == 0){
            zeros++;
        }
        else{
            back = 0;
        }
        n /= 10;
        digits ++;
    }
    return make_pair(digits, zeros);
}
void solve(){
   int n, m;
   cin >> n >> m;
   int a[n];
   for(int i = 0; i < n; i++){
    cin >> a[i];
   } 
   int all_numbers = 0;
   int b[n];
   int d, z;
   for(int i = 0; i < n; i++){
    auto x  = compute(a[i]);
    d = x.first;
    z = x.second;
    b[i] = z;
    all_numbers += d;
   }
   sort(b, b + n, greater<int>());
   for(int i = 0; i < n; i+=2){
    all_numbers -= b[i];
   }
   if(all_numbers > m){
    cout << "Sasha\n";
   }
   else{
    cout << "Anna\n";
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