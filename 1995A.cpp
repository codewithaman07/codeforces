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
ll n, arr[N];
void solve() {
    ll n,k; cin>>n>>k;
    if(k == 0){
        cout<<0<<endl;
        return;
    }
    if(k<=n){
        cout<<1<<endl;
        return;
    }
    ll ans = 1;
    k-=n;
    // cout<<k<<endl;
    int d = ((n-2)*2);
    while(k>0 && d>0){
        for(ll i = 0; i<2; i++){
            if(k>0 && d>0){
                k-=(n-1);
                // cout<<k<<"inside"<<endl;
                ans++;
                d--;
            }
        }
        n--;
    }
    if(k>0){
        // cout<<k<<endl;
        ans = (ans+k);
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

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}