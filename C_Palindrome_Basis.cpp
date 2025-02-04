#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 4e4;
const int MOD = 1e9+7;

vector<int>pal(int M){
    vector<int>ans;
    for(int i = 1; i<=M; i++){
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if(s == t) ans.pb(i);
    }
    return ans;
}
vector<int> fun() {
    vector<int>temp = pal(M);
    vector<int>dp(M+1,0);
    dp[0] = 1;
    for(int p : temp){
        for(int i = p; i<=M; i++){
            dp[i] = (dp[i]+dp[i-p])%MOD;
        }
    }
    return dp;
}

signed main() {
    Aman();

    int tc = 1;
    cin >> tc;
    vector<int>dp = fun();
    while (tc--) {
        int n; cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}