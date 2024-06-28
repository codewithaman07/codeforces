#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second

const int MOD = 1e9 + 7;

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
        ll n; cin>>n;
        vector<ll>arr(n);
        for(ll i = 0; i<n; i++){
            cin>>arr[i];
        }
        vector<ll>pre(n,0);
        vector<ll>suf(n,0);
        pre[0] = arr[0];
        suf[n-1] = arr[n-1];
        for(ll i = 1; i<n; i++){
            pre[i] = pre[i-1]+arr[i];
        }
        for(ll i = n-2; i>=0; i--){
            suf[i] = suf[i+1]+arr[i];
        }
        ll sum = 0, maxi = abs(pre[n-1]);
        for(int i = 0; i<n-1; i++){
            sum = abs(pre[i])+suf[i+1];
            maxi = max(maxi,sum);
        }
        cout<<maxi<<endl;
    }
    
    return 0;
}
