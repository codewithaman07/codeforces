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
    map<int,int>mp;
    for(int i = 2; i*i<=n; i++){
        int cnt = 0;
        while(n%i == 0){
            cnt++;
            n/=i;
            if(!mp.count(cnt)){
                mp[cnt] = i;
            }
            else mp[cnt]*=i;
        }
    }
    if(n>1){
        if(!mp.count(1)) mp[1] = n;
        else mp[1]*=n;
    }
    int ans = 0;
    for(auto &it : mp){
        ans+=it.second;
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