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
    int maxodd = -1, maxeven = -1;
    for(int i = 0; i<n; i+=2){
        if(a[i] > maxeven){
            maxeven = a[i];
        }
    }
    for(int i = 1; i<n; i+=2){
        if(a[i] > maxodd){
            maxodd = a[i];
        }
    }
    int ans = 0;
    ans = max(maxeven+((n+1)/2), maxodd+(n/2));
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