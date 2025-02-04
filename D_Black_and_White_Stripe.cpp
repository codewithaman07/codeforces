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
    string s; cin>>s;
    vector<int> pre(n+1,0);
    pre[0] = (s[0] == 'W');
    for(int i=1;i<n;i++) {
        pre[i] = pre[i-1] + (s[i] == 'W');
    }
    int l = 0, r = k-1;
    int ans = LLONG_MAX;
    while(r<n){
        int cnt = pre[r] - (l>0 ? pre[l-1] : 0);
        ans = min(ans,cnt);
        l++;
        r++;
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