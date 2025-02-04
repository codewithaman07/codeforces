
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
    int n,cs = 0; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    unordered_set<int>s, ps;
    ps.insert(0);
    s.insert(0);
    for(int i = 0; i<n; i++){
        cs+=arr[i];
        for(int num : ps){
            s.insert(cs-num);
        }
        ps.insert(cs);
    }
    vector<int>ans(s.begin(), s.end());
    sort(all(ans));
    cout<<ans.size()<<endl;
    for(int num : ans) cout<<num<<" ";
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
