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
    vector<int> a(n);
    f(0,n) cin>>a[i];
    vector<pair<int,int>>arr;
    f(0,n) arr.pb({a[i],i+1});
    sort(all(arr), greater<pair<int,int>>());
    int idx = (n+2-1)/2;
    int x = idx-1, y = idx+1;
    int f = 0;
    vector<int>vec(n+1);
    vec[0] = idx;
    for(int i = 0; i<n; i++){
        if(f == 0){
            vec[arr[i].second] = x;
            x--;
            f = 1;
        }
        else{
            vec[arr[i].second] = y;
            y++;
            f = 0;
        }
    }
    int ans = 0;
    for(int i = 1; i<=n; i++){
        ans+=(2*abs(vec[0]-vec[i])*a[i-1]);
    }
    cout<<ans<<endl;
    for(int i = 0; i<=n; i++) cout<<vec[i]<<" ";
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