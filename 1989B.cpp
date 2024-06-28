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
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    ll m = t.size();
    ll ans = m;
    for (int i = 0; i < m; i++) {
        ll num = i, idx = i;
        for (ll j = 0; j < n; j++) {
            if (s[j] == t[idx]) {
                idx++;
                if (idx == t.size()) break;
            }
        }
        ans = min(ans, num + m - idx);
    }
    cout << ans + n << endl;
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
