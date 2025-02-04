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

int bs(vector<int>&arr, int t){
    int l = 0, r = arr.size()-1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(arr[m] == t) return m;
        else if(arr[m] < t) l = m+1;
        else r = m-1;
    }
    return -1;
}

void solve() {
    int n; cin>>n;
    vector<int>arr(n), pre(n), suf(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    pre[0] = arr[0];
    suf[0] = arr[n-1];
    for(int i = 1; i<n; i++) suf[i] = suf[i-1]+arr[n-i-1];
    for(int i = 1; i<n; i++) pre[i] = pre[i-1]+arr[i];

    int ans = 0;
    for(int i = 0; i<n; i++){
        int t = pre[i];
        int idx = bs(suf, t);
        if(idx != -1){
            if(i+idx+2 <= n){
                ans = max(ans, i+idx+2);
            }
        }
    }
    cout<<ans<<endl;
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