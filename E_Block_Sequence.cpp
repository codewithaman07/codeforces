#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    vector<int>dp(n+1, 0);
    dp[n-1] = 1;
    for(int i = n-2; i>=0; i--){
        if(i+arr[i]<n) dp[i] = min(dp[i+1]+1, dp[i+arr[i]+1]);
        else dp[i] = dp[i+1]+1;
    }
    cout<<dp[0]<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}