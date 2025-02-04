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
    vector<pair<int,int>>vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i].first>>vec[i].second;
    int ans = m*n*4;
    for(int i = 1; i<n; i++){
        ans-=(2*abs(vec[i].first-m)+2*abs(vec[i].second-m));
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