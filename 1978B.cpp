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
    ll n,a,b;
    cin>>n>>a>>b;
    ll k = b-a;
    if(k<0) k = 0;
    if(k>n) k = n;
    ll ans = (k*(2*b + 1-k))/2;
    n-=k;
    if(n>0) ans+=(n*a);
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
