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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cnt = 0;
    if((a<b && b<d && c<d && a<c) || (c<a && a<b && d<b && c<d) || (d<c && c<a && b<a && d<b) || (b<d && d<c && a<c && b<a)) cnt++;
    if(cnt&1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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