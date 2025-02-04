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
    if(n%33 == 0){
        cout<<"YES"<<endl;
        return;
    }
    while(n>=33){
        int x = n%10;
        int y = (n/10)%10;
        if(x == 3 && y == 3) n/=100;
        else n-=33;
    }
    if(n == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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