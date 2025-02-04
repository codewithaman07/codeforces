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
    int n,l,r; cin>>n>>l>>r;
    vector<int>a(n);
    f(0,n) cin>>a[i];
    int ans = 0;
    sort(all(a));
    for(int i = 0; i<n; i++){
        int ri = upper_bound(a.begin()+i+1, a.end(), r-a[i])-a.begin()-i-1;
        int li = lower_bound(a.begin()+i+1, a.end(), l-a[i])-a.begin()-i-1;
        ans+=(ri-li);
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