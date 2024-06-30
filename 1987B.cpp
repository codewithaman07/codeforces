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
    ll n; cin>>n;
    vector<ll>arr(n);
    ll x = 0;
    f(0,n) cin>>arr[i];
    for(int i = 0; i<n-1; i++){
        if(arr[i]<=arr[i+1]){
            x++;
        }
    }
    if(x == n-1){
        cout<<0<<endl;
        return;
    }
    ll ans = 0;
    ll maxi = LLONG_MIN;
    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            ans+=(arr[i]-arr[i+1]);
            maxi = max(maxi, arr[i]-arr[i+1]);
            arr[i+1] = arr[i];
        }
    }
    ans+=maxi;
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
