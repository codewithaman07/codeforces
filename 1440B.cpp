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
    ll n,k; cin>>n>>k;
    vector<ll>arr(n*k);
    f(0,n*k) cin>>arr[i];
    ll ans = 0;
    ll i = n*k;
    while(k--){
        i = i-(n/2 +1);
        ans+=arr[i];
        
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
