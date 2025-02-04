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
    int n,m; cin>>n>>m;
    map<int,int>mp;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        mp[x%m]++;
    }
    int cnt = 0;
    if(mp[0] > 0) cnt++;
    for(int i = 1; i<m; i++){
        if(mp[i] == 0) continue;
        if(mp[i] < mp[m-i]) cnt+=(mp[m-i]-mp[i]);
        else if(mp[i] > mp[m-i]) cnt+=(mp[i]-mp[m-i]);
        else cnt++;
        mp[i] = mp[m-i] = 0;
    }
    cout<<cnt<<endl;
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