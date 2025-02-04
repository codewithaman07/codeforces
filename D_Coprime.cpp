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
    map<int,int>mp;
    for(int i = 0; i<n; i++) cin>>arr[i], mp[arr[i]] = i+1;
    int ans = -1;
    for(auto &it : mp){
        int a = it.first;
        for(auto &i : mp){
            int b = i.first;
            if(__gcd(a,b) == 1) ans = max(ans, it.second+i.second);
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