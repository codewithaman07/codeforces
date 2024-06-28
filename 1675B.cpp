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
    ll n; cin>>n;
    vector<ll>arr(n);
    for(ll i = 0; i<n; i++){
        cin>>arr[i];
    }
    ll cnt = 0;
    for(ll i = n-2; i>=0; i--){
        if(arr[i+1]<=0){
            cnt = -1;
            break;
        }
        while(arr[i]>=arr[i+1]){
            arr[i]/=2;
            cnt++;
        }
    }
    cout<<cnt<<endl;
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
