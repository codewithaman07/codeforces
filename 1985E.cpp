#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second

const int MOD = 1e9 + 7;

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
        ll x, y, z, k;
        cin >> x >> y >> z >> k;
        ll ans = 0;
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= y; j++) {
                if (k % (i * j) == 0) {
                    ll l = k / (i * j);
                    if (l <= z) {
                        ll v1 = x - i + 1, v2 = y - j + 1, v3 = z - l + 1;
                        ans = max(ans, v1 * v2 * v3);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
