#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define f(x,n) for(ll i = x ; i<n ; i++)
const int N = 2e5+20, inf = 1e9;
ll n, arr[N], dp[N][4];

void solve() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 4; j++){
            dp[i][j] = inf;
        }
    }
    f(0, n) cin >> arr[i];
    
    dp[0][0] = 0; 

    for(int i = 1; i <= n; i++){
        dp[i][0] = dp[i-1][0] + (arr[i-1] > 0);

        if(i == 1){
            if(arr[i-1] <= 2) dp[i][1] = 1;
            continue;
        }

        if(arr[i-1] >= 5) continue;

        dp[i][1] = min(dp[i][1], dp[i-1][2] + 1);
        dp[i][2] = min(dp[i][2], dp[i-1][1] + 1);

        if(arr[i-1] <= 2){
            dp[i][0] = min(dp[i][0], dp[i-1][1]);
            dp[i][1] = min(dp[i][1], dp[i-1][0] + 1);
        }
    }
    cout << dp[n][0] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
