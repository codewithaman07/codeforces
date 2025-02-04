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
    int n,d; cin>>n>>d;
    cout<<1<<" ";
    if(d%3 == 0 || n>=3) cout<<3<<" ";
    if(d%5 == 0) cout<<5<<" ";
    if(d%7 == 0 || n>=3) cout<<7<<" ";
    if(n>=6 || (d%3 == 0 && n>=3) || d%9 == 0) cout<<9<<" ";
    cout<<endl;
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