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
    int n,k; cin>>n>>k;
    vector<int> a(n), b(n);
    f(0,n) cin>>a[i];
    f(0,n) cin>>b[i];
    int maxi = b[0];
    for(int i = 1; i<n; i++){
        a[i]+=a[i-1];
        maxi = max(maxi, b[i]);
        b[i] = maxi;
    }
    int ans = 0;
    for(int i = 0; i<min(n,k); i++){
        ans = max(ans, a[i]+(k-i-1)*b[i]);
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