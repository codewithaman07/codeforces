#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll maxi = 0;
    vector<ll>pre(n,0), suf(n,0);
    set<char>st;
    for(ll i = 0; i<n; i++){
        st.insert(s[i]);
        pre[i] = st.size();
    }
    st.clear();
    for(ll i = n-1; i>=0; i--){
        st.insert(s[i]);
        suf[i] = st.size();
    }
    for(ll i = 0; i<n-1; i++){
        maxi = max(maxi, pre[i]+suf[i+1]);
    }
    cout<<maxi<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}
