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
    vector<ll>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    ll ans = arr[n-1]-arr[0];
    for(ll i = 0; i<n-1; i++){
        ans = max(ans, arr[i]-arr[0]);
    }
    for(int i = 1; i<n; i++){
        ans = max(ans,arr[n-1]-arr[i]);
    }
    for(int i = 1; i<n; i++){
        ans = max(ans,arr[i-1]-arr[i]);
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
