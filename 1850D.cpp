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
    ll n, k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(),arr.end());
    ll cnt = 1;
    ll maxi = 1;
    for(ll i = 1; i<n; i++){
        if((arr[i]-arr[i-1])<=k){
            cnt++;
        }
        else{
            cnt = 1;
        }
        maxi = max(cnt,maxi);
    }
    cout<<abs(n-maxi)<<endl;
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
