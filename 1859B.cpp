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
    int mini = INT_MAX;
    vector<ll>min2;
    f(0,n){
        ll m; cin>>m;
        vector<ll>arr(m);
        f(0,m){
            cin>>arr[i];
        }
        int min_ele = *min_element(all(arr));
        mini = min(mini,min_ele);
        arr.erase(find(all(arr),min_ele));
        min2.pb(*min_element(all(arr)));
    }
    ll ans = mini + accumulate(all(min2), 0LL) - *min_element(all(min2));
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
