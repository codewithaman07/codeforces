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
    if(n<10) cout<<n<<endl;
    else{
        int ans = 0;
        for(int i = 1; i<=n; i = i*10 + 1){
            for(int j = 1; j<=9; j++){
                if(i*j<=n) ans++;
            }
        }
        cout<<ans<<endl;
    }       
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