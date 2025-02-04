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
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    map<int,vector<int>>mp;
    for(int i = 0; i<n; i++){
        int num = arr[i];
        int msb = 31- __builtin_clz(num);
        mp[msb].pb(num);
    }
    int cnt = 0;
    for(auto it : mp){
        int x = it.second.size();
        cnt+=(x*(x-1))/2;
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