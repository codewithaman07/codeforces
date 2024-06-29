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
    ll x,n;
    cin>>x>>n;
    ll d;
    switch(n%4){
    case 0:
        d = 0;
        break;
    case 1:
        d = -n;
        break;
    case 2:
        d = 1;
        break;
    case 3:
        d = n+1;
    }
    if(x&1) cout<<x-d<<endl;
    else cout<<x+d<<endl;
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
