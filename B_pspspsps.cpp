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
    int n; cin>>n;
    string s; cin>>s;
    int a = -1, b = -1;
    for(int i = 0; i<n; i++) if(s[i] == 's') a = i;
    for(int i = n-1; i>=0; i--) if(s[i] == 'p') b = i;
    if(a == 0 || b == n-1 || a == -1 || b == -1) cout<<"YES"<<endl;
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