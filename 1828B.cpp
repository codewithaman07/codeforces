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
    ll n; cin>>n;
    vector<ll>arr(n+1);
    for(ll i = 1; i<n+1; i++){
        cin>>arr[i];
    }
    ll ans = 0;
    for(int i = 1; i<=n; i++){
        ans = __gcd(abs(arr[i]-i),ans);
    } 
    cout<<ans<<endl;

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
