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
    vector<int> a(5,0),b(5,0);
    f(1,n+1) a[i%5]++;
    f(1,m+1) b[i%5]++;
    int ans = 0;
    for(int i = 0; i<5; i++){
        if(i == 0){
            ans+= (a[i]*b[i]);
        }
        else ans+= (a[i]*b[5-i]);
    }
    cout<<ans<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}