#include <bits/stdc++.h>
using namespace std;
#define int long long int

int fac[2*100000 + 1];
int MOD = 1e9 + 7;

void factorial(){
    for(int i = 2; i <= 2*100000; i++){
       fac[i] = ((i*fac[i - 1] % MOD) + MOD ) % MOD;
    }
    return;
}
void solve(){
   int n;
   cin >> n;
   int a[n];
   int AND = (1<<30);
   AND = 2*AND - 1;
   int OR = 0;
   for(int i = 0; i < n; i++){
    cin >> a[i];
    AND &= a[i];
    OR |= a[i];
   }
   vector<int> idx;
   bitset<30> band(AND);
   bitset<30> bor(OR);
    for(int i = 0; i < 30; i++){
    if(band[i] == 1 || bor[i] == 0){
        continue;
    }
    else{
        idx.push_back(i);
    }
   }
   bitset<32> check(0);
   for(auto i: idx){
     check[i] = 1;
   }
   int count = 0;
   check  = check.flip();
   int num = check.to_ullong();
   for(int i = 0; i < n; i++){
    if((num | a[i]) == num){
        count++;
    }
   }
   int ans = 0;
   if(count  == 1) {
    cout << 0 << "\n";
    return;
   }
   ans = count  % MOD;
   ans =  ( ans + MOD ) % MOD;
   ans =  ans * (count - 1)  % MOD;
   ans = (ans + MOD) % MOD;
   ans = ans  * fac[n - 2] % MOD;
   ans = (ans + MOD) % MOD;
   cout << ans << "\n";
}
signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int _;
 cin >> _;
 fac[0] = 1;
 fac[1] = 1;
 factorial();
 while(_--){
  solve();
 }
 return 0;
}