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
    int n,a,b,c; cin>>n>>a>>b>>c;
    vector<int>dp(n+1, -1);
    dp[0] = 0;
    for(int i = 1; i<=n; i++){
        if(i>=a && dp[i-a] != -1){
            dp[i] = max(dp[i], dp[i-a]+1);
        }
        if(i>=b && dp[i-b] != -1){
            dp[i] = max(dp[i], dp[i-b]+1);
        }
        if(i>=c && dp[i-c] != -1){
            dp[i] = max(dp[i], dp[i-c]+1);
        }
    }
    cout<<dp[n]<<endl;
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