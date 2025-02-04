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
    int n,m,q; cin>>n>>m>>q;
    vector<int>b(m);
    f(0,m) cin>>b[i]; 
    sort(all(b));
    while(q--){
        int x; cin>>x;
        int ans;
        if(x < b[0]) ans = b[0]-1;
        else if(x > b[m-1]) ans = n-b[m-1];
        else{
        int i = lower_bound(all(b),x)-b.begin();
        ans = (b[i]-b[i-1])/2;
        }
        cout<<ans<<endl;
    }
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