#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int mod = 1e9+7;
const int N = 2e5+20;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> brr;
    f(0, n) cin >> arr[i];
    if (*max_element(all(arr)) == 0) {
        cout << 0 << endl;
        cout<<" "<<endl;
        return;
    }

    ll cnt = 0;
    while (cnt < 40) {
        ll maxi = *max_element(all(arr));
        ll mini = *min_element(all(arr));
        if (maxi == 0 && mini == 0) break;
        ll m = (maxi + mini) / 2;
        brr.pb(m);
        for (int i = 0; i < n; i++) {
            arr[i] = abs(arr[i] - m);
        }
        cnt++;
    }
    if (*max_element(all(arr)) == 0) {
        cout << cnt << endl;
        for (auto i : brr) {
            cout << i << " ";
        }
        cout << endl;
    } 
    else {
        cout << -1 << endl;
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
