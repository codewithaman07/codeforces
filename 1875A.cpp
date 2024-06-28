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
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll>arr(n);
    for(ll i = 0; i<n; i++){
        cin>>arr[i];
    }
    ll ans = 0;
    ans+=b;
    for(ll i = 0; i<n; i++){
        ans+=min(arr[i],a-1);
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
