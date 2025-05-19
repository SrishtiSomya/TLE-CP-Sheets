#include <bits/stdc++.h>
using namespace std;
#define int long long int

int n;
int a[100000];
int b[100000];
 
int dp[100000][2];
signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 cin >> n;
 for(int i = 0; i < n; i++){
    cin >> a[i];
 }
 for(int i = 0; i < n; i++){
    cin >> b[i];
 }

 for(int i = 0; i < n; i++){
    if(i == 0){
        dp[i][0] = a[0];
        dp[i][1] = b[0];
    }else{
        dp[i][0] = max(dp[i - 1][0], a[i] + dp[i - 1][1]);
        dp[i][1] = max(dp[i - 1][1], b[i] + dp[i - 1][0]);
    }
 }
 
 cout << max(dp[n - 1][0] , dp[n - 1][1]) << "\n";
 return 0;
}