#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n,q; cin>>n>>q;
    vector<int> arr(n), b(q), pre(n,0);
    f(0,n) cin>>arr[i];
    f(0,q) cin>>b[i];
    pre[0] = arr[0];
    f(1,n) pre[i] = pre[i-1] + arr[i];
    int maxi = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] < maxi) arr[i] = maxi;
        else maxi = arr[i];
    }
    for(int i = 0; i<q; i++){
        int idx = upper_bound(all(arr),b[i]) - arr.begin()-1;
        if(idx == -1) cout<<0<<" ";
        else cout<<pre[idx]<<" ";
    }
    cout<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}