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
    vector<ll>arr(n);
    f(0,n) cin>>arr[i];
    ll ans = k-1, e = 0;
    f(0,n){
        if(arr[i]%2 == 0){
            e++;
        }
        if(arr[i]%k == 0){
            ans = 0;
        }
        else{
            ans = min(ans, k-arr[i]%k);
        }
    }
    if(k!=4){
        cout<<ans<<endl;
    }
    else{
        if(e>=2){
            cout<<0<<endl;
        }
        else if(e == 1){
            cout<<min(ans,1LL)<<endl;
        }
        else{
            cout<<min(ans,2LL)<<endl;
        }
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
