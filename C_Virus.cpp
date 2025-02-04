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
    int n, m; cin>>n>>m;
    vector<int>arr(m);
    f(0,m) cin>>arr[i];
    sort(all(arr));
    vector<int>vec;
    vec.pb(n+arr[0]-arr[m-1]-1);
    for(int i = 1; i<m; i++){
        vec.pb(arr[i]-arr[i-1]-1);
    }
    sort(all(vec), greater<int>());
    int ans = 0, cnt = 0;
    for(int &it : vec){
        if(it-cnt*2 > 0){
            ans+= max(1ll, it-cnt*2-1);
        }
        cnt+=2;
    }
    cout<<n-ans<<endl;
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