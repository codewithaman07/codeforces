#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    if(arr[0] == arr[n-1]){
        cout << 0 << endl;
        return;
    }

    ll cnt = 1, maxi = 1;
    for(ll i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            cnt++;
        } else {
            maxi = max(maxi, cnt);
            cnt = 1;
        }
    }
    maxi = max(maxi, cnt);
    ll ans = 0;
    ll copies = 1;
    while (maxi * copies < n) {
        ans++;
        copies *= 2;
    }
    ans += (n - maxi);
    cout << ans << endl;
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
