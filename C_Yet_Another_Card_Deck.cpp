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
    vector<int> a(n);
    map<int,int>mp;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(mp[a[i]] == 0){
            mp[a[i]] = i+1;
        }
    }
    while(q--){
        int x; cin>>x;
        cout<<mp[x]<<" ";
        for(auto &i:mp){
            if(i.second < mp[x]){
                i.second++;
            }
        }
        mp[x] = 1;
    }
}

signed main() {
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}