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
    ll n,p; cin>>n>>p;
    vector<ll>a(n), b(n);
    f(0,n) cin>>a[i];
    f(0,n) cin>>b[i];
    vector<pair<ll, ll>>arr;
    arr.pb({p,n+1});
    f(0,n){
        arr.pb({b[i],a[i]});
    }
    sort(arr.begin(),arr.end());
    ll total = 1, cost = p;
    ll idx = 0;
    while(total<n){
        ll left = n-total;
        if(arr[idx].second <=left){
            ll sec =arr[idx].second;
            ll fir = arr[idx].first;
            total+= sec;
            cost = cost + (sec*fir*1ll);
        }
        else{
            total = n;
            cost = cost+ (left*1ll*arr[idx].first);
        }
        idx++;
    }
    cout<<cost<<endl;
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
