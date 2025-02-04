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
    ll n; cin >> n;
    string s; cin >> s;

    if (n == 1) {
        if (s[0] == '1') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }

    string t = "";
    for (ll i = 0; i < n; i++) {
        if (i == 0 || !(s[i - 1] == '0' && s[i] == '0')) {
            t += s[i];
        }
    }

    ll p = t.size();
    ll ones = 0, zeros = 0;
    for (ll i = 0; i < p; i++) {
        if (t[i] == '1') ones++;
        else zeros++;
    }

    if (ones > zeros) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
