#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x, n) for (ll i = x; i < n; i++)
#define all(x) x.begin(), x.end()
#define MOD 1000000007

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n+1);
    f(1, n+1) cin >> arr[i];
    for(ll i = 2; i<=n-1; i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            cout<<"YES"<<endl;
            cout<<i-1<<" "<<i<<" "<<i+1<<endl;
            return;
        }
    }
    cout << "NO" << endl;
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
