#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

void solve() {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    vector<vector<int>>dp(n, vector<int>(3, INT_MAX));
    if(arr[0] == 0) dp[0][0] = 1;
    if(arr[0] == 1 || arr[0] == 3) dp[0][1] = 0;
    if(arr[0] == 2 || arr[0] == 3) dp[0][2] = 0;
    for(int i = 1; i<n; i++){
        dp[i][0] = min({dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + 1;
        if(arr[i] == 3){
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        }
        else if(arr[i] == 1){
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        }
        else if(arr[i] == 2){
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        }
    }
    cout<<min({dp[n-1][0], dp[n-1][1], dp[n-1][2]})<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}