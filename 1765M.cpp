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
    ll n; 
    cin >> n;
    if ((n & 1) == 0) {
        cout << n / 2 << " " << n / 2 << endl;
        return;
    }
    ll x = 1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            x = n / i;
            break;
        }
    }
    cout << x << " " << (n - x) << endl;
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
