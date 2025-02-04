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
    int n,q; cin>>n>>q;
    vector<int>a(n), b(q), v;
    f(0,n) cin>>a[i];
    f(0,q) cin>>b[i];
    set<int>st;
    for(auto it : b){
        if(st.count(it)) continue;
        st.insert(it);
        int x = (1<<it);
        for(int i = 0; i<n; i++){
            if(a[i]%x == 0){
                a[i]+=(1<<(it-1));
            }
        }
    }
    for(auto i : a) cout<<i<<" ";
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