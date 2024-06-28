#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) {
        cout << "YES" << endl;
    } 
    else if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) {
        cout << "YES" << endl;
    } 
    else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
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
