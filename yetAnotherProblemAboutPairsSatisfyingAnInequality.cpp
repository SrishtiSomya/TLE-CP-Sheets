#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool compare(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first < b.first) return true;
    return false;
}
void solve(){
   int n;
   cin >> n;
   vector<pair<int, int>> pairs;
   for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(x < (i + 1)){
        pairs.push_back(make_pair(x, i + 1));
    }
   }
   sort(pairs.begin(), pairs.end(), compare);
   int sol = 0;
   for(int i = 0; i < pairs.size(); i++){
    int high = pairs.size() - 1;
    int low = i + 1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        int check = pairs[mid].first > pairs[i].second;
        if(check){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(ans != -1) sol += (pairs.size() - 1 - ans + 1);
   }
   cout << sol << "\n";
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