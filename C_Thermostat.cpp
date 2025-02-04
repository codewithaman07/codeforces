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
    int l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a>b) swap(a,b);
    if(a == b) cout<<0<<endl;
    else if(b-a >= x) cout<<1<<endl;
    else if(r-b >= x) cout<<2<<endl;
    else if(a-l >= x) cout<<2<<endl;
    else if(r-a >= x && b-l >= x) cout<<3<<endl;
    else cout<<-1<<endl;
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