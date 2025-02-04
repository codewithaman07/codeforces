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
    vector<int>a(n);
    map<int,vector<int>>mp;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        mp[a[i]].pb(i);
    }
    vector<int>ans(n,0);
    for(auto &it : mp){
        vector<int>temp = it.second;
        int cnt = 1;
        for(int i = 0; i<temp.size()-1; i++){
            if((temp[i+1]-temp[i])&1) cnt++;
        }
        ans[it.first-1] = cnt;
    }
    for(int &num : ans) cout<<num<<' ';
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