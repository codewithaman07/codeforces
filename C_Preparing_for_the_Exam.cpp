#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for (int i = x; i < n; i++)
#define all(x) x.begin(), x.end()
const int M = 1e9 + 7;
const int N = 1e6 + 1;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), q(k);
    set<int> q1, a1;
    for (int i = 1; i <= n; i++) {
        a1.insert(i);
    }
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> q[i];
        q1.insert(q[i]);
    }
    string ans;
    for (int i = 0; i < m; i++) {
        bool f = (q1.find(a[i]) != q1.end());
        q1.insert(a[i]);
        if (q1 == a1) ans += "1";
        else ans += "0";
        if (!f) q1.erase(a[i]);
    }
    cout << ans << endl;
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
