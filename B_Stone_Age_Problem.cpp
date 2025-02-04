#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
const int M = 1e9+7;

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    map<int, int> mp;
    bool f = false;
    int sum = accumulate(a.begin(), a.end(), 0LL), last = -1;
    
    while (q--) {
        int t; cin >> t;
        if (t == 2) {
            int b; cin >> b;
            mp.clear();
            sum = b * n;
            last = b;
            f = true;
            cout << sum << endl;
        } else {
            int i, num; cin >> i >> num;
            i--;
            
            if (f) {
                if (mp.count(i)) {
                    sum -= mp[i];
                } else {
                    sum -= last;
                }
                sum += num;
                mp[i] = num;
            } else {
                sum = sum - a[i] + num;
                a[i] = num;
            }
            cout << sum << endl;
        }
    }
}

signed main() {
    Aman();

    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}
