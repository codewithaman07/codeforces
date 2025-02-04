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
    vector<int>a(n), pre(n+1);
    f(0,n) cin>>a[i];
    sort(all(a));
    int sum = 0, maxi = 0;
    for(int i = 0; i<n; i++){
        sum+=a[i];
        pre[i+1] = pre[i]+a[i];
    }
    for(int i = 0; i<=k; i++){
        maxi = max(maxi, pre[n-i]-pre[2*(k-i)]);
    }
    cout<<maxi<<endl;
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