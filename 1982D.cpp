#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<vector<ll>> arr(n, vector<ll>(m));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    vector<string> vec(n);
    for(ll i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Initialize prefix sum array
    vector<vector<ll>> pre(n, vector<ll>(m));
    for(ll i = 0; i < n; i++) {
        if(vec[i][0] == '1') pre[i][0] = 1;
        else pre[i][0] = -1;
        for(ll j = 1; j < m; j++) {
            pre[i][j] = pre[i][j-1];
            if(vec[i][j] == '1') pre[i][j]++;
            else pre[i][j]--;
        }
    }
    
    for(ll j = 0; j < m; j++) {
        for(ll i = 1; i < n; i++) {
            pre[i][j] += pre[i-1][j];
        }
    }

    set<ll> st;
    for(ll i = 0; i < n-k+1; i++) {
        for(ll j = 0; j < m-k+1; j++) {
            ll val = pre[i+k-1][j+k-1];
            if(j > 0) val -= pre[i+k-1][j-1];
            if(i > 0) val -= pre[i-1][j+k-1];
            if(i > 0 && j > 0) val += pre[i-1][j-1];
            st.insert(abs(val));
        }
    }

    ll diff = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(vec[i][j] == '1') diff += arr[i][j];
            else diff -= arr[i][j];
        }
    }

    diff = abs(diff);
    ll g = 0;
    for(auto it : st) g = __gcd(g, it);
    
    if(diff == 0) {
        cout << "yes" << endl;
        return;
    }
    
    if(g == 0) {
        cout << "no" << endl;
        return;
    }
    
    if(diff % g == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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
