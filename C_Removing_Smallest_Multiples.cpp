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
    vector<int>arr(n+1), vis(n+1,0);
    string s; cin>>s;
    for(int i = 1; i<=n; i++) arr[i] = s[i-1]-'0';
    int ans = 0;
    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n; j+=i){
            if(!arr[j] && !vis[j]){
                vis[j] = 1;
                ans+=i;
            }
            if(arr[j]) break;
        }
    }
    cout<<ans<<endl;
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