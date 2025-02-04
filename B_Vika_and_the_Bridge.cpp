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
    int n,k; cin>>n>>k;
    map<int,vector<int>>mp;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        mp[x].pb(i+1);
    }
    int ans = n;
    for(auto [x,v] : mp){
        vector<int>diff;
        v.insert(v.begin(), 0);
        v.pb(n+1);
        for(int i = 1; i<v.size(); i++){
            diff.pb(v[i]-v[i-1]-1);
        }
        sort(all(diff), greater<int>());
        int curr = 0;
        for(int i = 1; i<diff.size(); i++) curr = max(curr, diff[i]);
        curr = max(curr, diff[0]/2);
        ans = min(ans, curr);
    }
    cout<<ans<<endl;
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