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
    string s; cin>>s;
    int n = s.size();
    set<char>st;
    for(int i=0;i<n;i++) st.insert(s[i]);
    int f = 1;
    for(int i = 0; i<n; i++){
        if(s[i] != s[i%st.size()]) f = 0;
    }
    if(f) cout<<"YES"<<endl;
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