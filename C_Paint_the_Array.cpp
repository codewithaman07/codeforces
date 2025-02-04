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
    int x = 0, y = 0, fx = 1, fy = 1;
    for(int i = 0; i<n; i++){
        if(i&1) x = __gcd(x, arr[i]);
        else y = __gcd(y, arr[i]);
    }
    for(int i = 0; i<n; i++){
        if((i&1) && arr[i]%y == 0) fy = 0;
        if(!(i&1) && arr[i]%x == 0) fx = 0;
    }
    if(fx) cout<<x<<endl;
    else if(fy) cout<<y<<endl;
    else cout<<0<<endl;
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