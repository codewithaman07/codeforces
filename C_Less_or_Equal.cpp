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
    
    vector<int>v(n);
    for(auto & x : v) cin>>x;
    sort(all(v));
    int ans = 0;
    if(k == 0){
        ans = v[0] - 1;
    }
    else ans = v[k-1];
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(v[i]<=ans) cnt++;
    }
    if(cnt != k || ans < 1 || ans > 1e9){
        cout<<-1<<endl;
    }
    else cout<<ans<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}