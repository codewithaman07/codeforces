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
    int a,b; cin>>a>>b;
    if(a<b) swap(a,b);
    if(a==b) cout<<0<<endl;
    else if(a%b!=0) cout<<-1<<endl;
    else {
        int ans = 0;
        a/=b;
        while(a>1) {
            if(a%8==0) a/=8;
            else if(a%4==0) a/=4;
            else if(a%2==0) a/=2;
            else {
                ans = -1;
                break;
            }
            ans++;
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