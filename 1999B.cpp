#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(__null);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int mod = 1e9+7;
void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = 0;
    if((a>c && b>=d) || (a>=c && b>d)) ans+=2;
    if((a>d && b>=c) || (a>=d && b>c)) ans+=2;
    cout<<ans<<endl;
}

signed main() {
    fastio()
    

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}	