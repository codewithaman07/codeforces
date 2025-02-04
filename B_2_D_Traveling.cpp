#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x, n) for (int i = x; i < n; i++)
#define all(x) x.begin(), x.end()
const int M = 1e9 + 7;
const int N = 1e6 + 1;

void solve() {
    int n,k,a,b; cin>>n>>k>>a>>b;
    vector<int>x(n+1), y(n+1);
    for(int i = 1; i<=n; i++){
        cin>>x[i];
        cin>>y[i];
    }
    int ans = abs(x[a]-x[b]) + abs(y[a]-y[b]);
    int mini = 1e18, mini2 = 1e18;
    for(int i = 1; i<=k; i++){
        mini = min(mini, abs(x[i]-x[a])+abs(y[i]-y[a]));
        mini2 = min(mini2, abs(x[i]-x[b])+abs(y[i]-y[b]));
    }
    cout<<min(ans, mini+mini2)<<endl;
}

signed main() {
    Aman();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
