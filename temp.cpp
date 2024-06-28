#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  

void solve() {
    ll n; cin>>n;
    vector<ll>arr(n);
    for(auto &x : arr) cin>>x;
    vector<vector<ll>>g(n);
    for(ll e = 0; e<n-1; e++){
        ll u, v; cin>>u>>v;
        u--; v--;
        g[u].pb(v);
        g[v].pb(u);
    }
    ll root = -1, mini = *min_element(all(arr));
    for(ll i = 0; i<n; i++){
        if(arr[i] == mini) root = i;
    }
    cout<<n-1<<endl;
    function<void(ll, ll)> dfs = [&](ll u, ll p){
        for(auto &v : g[u]){
            if(v == p) continue;
            dfs(v,u);
        }
        if(u != root ) cout<<u+1<<" ";
    };
    dfs(root, -1);
    cout<<endl;
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
