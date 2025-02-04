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
    vector<int> l(n+1), r(n+1), pre(2*n+1, 0), cnt(2*n+1, 0);
    for(int i = 1; i<=n; i++){
        cin>>l[i];
        cin>>r[i];
        if(l[i] == r[i]){
            cnt[l[i]]++;
            pre[l[i]] = 1;
        }
    }
    for(int i = 2; i<=2*n; i++) pre[i] += pre[i-1];
    for(int i = 1; i<=n; i++){
        bool f = 0;
        if(l[i] == r[i]) f = (cnt[l[i]] == 1);
        else{
            int x = pre[r[i]] - pre[l[i]-1];
            int y = r[i]-l[i]+1;
            f = (x < y);
        }
        cout<<f;
    }
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