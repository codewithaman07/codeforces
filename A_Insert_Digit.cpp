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
    int n,d; cin>>n>>d;
    string s; cin>>s;
    string a = to_string(d);
    string ans;
    int f = 1;
    for(int i = 0; i<n; i++){
        if(s[i]>=a[0]){
            ans+=s[i];
        }
        else{
            if(f){
                ans+=a;
                f = 0;
            }
            ans+=s[i];
        }
    }
    if(f) ans+=a;
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