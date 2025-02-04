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
    int w,h; cin>>w>>h;
    int ans = 0;
    for(int i = 0; i<4; i++){
        int k; cin>>k;
        vector<int>arr(k);
        for(int j = 0; j<k; j++) cin>>arr[j];
        ans = max(ans, (arr[k-1]-arr[0])*(i<2?h:w));
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