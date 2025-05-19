#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
map<int, int> primeFactorization(int n) {
    map<int, int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1) {
        factors[n]++;
    }
    return factors;
}

signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int i = 1;
 int j = 2;
 int query[4];
 map<int, int> factors[4];
 for(int j = 2; k < 6; k++){
  cout << "! " << i << " " << j << "\n";
  cin >> query[j - 2];
  factors[j - 2] = primeFactorization(query[j - 2]);
 }
 int ch4[6] = {};
 int ch8[6] = {};
 int ch15[6] = {};
 int ch16[6] = {};
 int ch23[6] = {};
 int ch42[6] = {};

 if(query[0] % 15 == 0){
    ch1
 }
 return 0;
}