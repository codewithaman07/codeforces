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
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans = 0;
    int x = min(n,a);
    int x1 = n-x;
    int y = min(n,b);
    int y1 = n-y;
    int z = min(c, x1+y1);
    cout<<x+y+z<<endl;
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