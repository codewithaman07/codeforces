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
    vector<int>a(n), query(q);
    f(0,n) cin>>a[i];
    f(0,q) cin>>query[i];
    vector<int>ans(q,0);
    map<int,int>mp;
    for (int i = 0; i < n; i++){
            int prev = i + 1;
            int after = n - i;
            mp[(prev * after) - 1] += 1;
            if (i + 1 < n){
                mp[prev * (after - 1)] += (a[i + 1] - a[i]) - 1;
            }
        }
    for(int i = 0; i<q; i++){
        cout<<mp[query[i]]<<" ";
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