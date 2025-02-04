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
    int n,m; cin>>n>>m;
    vector<int>a(n), b(m), ans(m);
    f(0,n) cin>>a[i];
    f(0,m) cin>>b[i];
    sort(all(a));
    for(int i = 0; i<m; i++){
        ans[i] = upper_bound(all(a), b[i])-a.begin();
    }
    f(0,m) cout<<ans[i]<<" ";
    cout<<endl;    
}

signed main() {
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}