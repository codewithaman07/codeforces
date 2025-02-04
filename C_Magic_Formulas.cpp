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
    vector<int> a(n), pre(N,0);
    int xr = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        xr ^= a[i];
    }
    for(int i = 1; i<N; i++){
        pre[i] = pre[i-1]^i;
    }
    for(int i = 0; i<n; i++){
        int x = n/(i+1);
        int left = n%(i+1);
        if(x&1) xr ^= pre[i];
        xr ^= pre[left];
    }
    cout << xr << endl;
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