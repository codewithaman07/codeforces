#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x, n) for (int i = x; i < n; i++)
#define all(x) x.begin(), x.end()
const int M = 1e9 + 7;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));
    vector<int> gaps;
    for (int i = 1; i < n; i++) {
        int gap = a[i] - a[i - 1];
        if (gap > x) gaps.pb(gap);
    }
    sort(all(gaps));
    int ans = gaps.size() + 1;
    for (int gap : gaps) {
        int num = (gap + x - 1) / x - 1;
        if (num <= k) {
            k -= num;
            ans--;
        } else {
            break;
        }
    }
    cout << ans << endl;
}

signed main() {
    Aman();
    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}
