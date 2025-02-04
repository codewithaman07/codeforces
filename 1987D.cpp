#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
#define MOD 1000000007

void solve() {
    int n; cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    f(0,n){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<int>vec;
    for(auto it : mp){
        vec.pb(it.ss);
    }
    n = vec.size();
    vector<vector<int>>dp(n,vector<int>(n+1, -1));
    dp[0][1] = 1;
    for(int i = 1; i<n; i++){
        for(int j = 1; j<n+1; j++){
            dp[i][j] = -1;
            if(dp[i-1][j-1] != -1){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            if(dp[i-1][j] >=vec[i]){
                if(dp[i][j] == -1){
                    dp[i][j] = dp[i-1][j]-vec[i];
                }
                else{
                    dp[i][j] = max(dp[i][j],dp[i-1][j]-vec[i]);
                }
            }
        }
    }
    int ans = -1;
    for(int i = 1; i<n+1; i++){
        if(dp[n-1][i] != -1){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
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
