#include <bits/stdc++.h>
using namespace std;
//#define int long long int
int n, k;
int MOD = 1e9 + 7;
/*
1. Definition:
   dp[i][j] represents number  of good  sequences starting from i of length j
2. Base Case:
   dp[i][1] = 1;
3. Updating DP:
   dp[i][j + 1] = for all k divisible by i dp[k][j]
4. Final Answer:
   Sum of all dp[i][K]
*/

int dp[2000 + 1][2000 + 1];
 
void solve(){
   cin >> n >> k;
   for(int i = 0; i < 2000 + 1; i++){
    dp[0][i] = 0;
    dp[i][0] = 0;
    dp[i][1] = 1;
   }
   for(int j = 2; j <= k; j++){
     for(int i = 1; i <= n; i++){
        for(int k = 1; i*k <= n; k++){
            long long int x = (dp[i][j] + dp[i*k][j - 1]) % MOD;
            dp[i][j] = x;
        }
     }
   }
   int ans = 0;
   for(int i = 1; i <= n; i++){
      long long int x = (ans + dp[i][k]) % MOD;
      ans = x;
   }
   cout << ans << "\n";
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