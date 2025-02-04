#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; 
    cin >> n;
    vector<pair<int, int>> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i].first;
        c[i].second = i;
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    int ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second) {
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }

    cout << ans << endl;
}

signed main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
