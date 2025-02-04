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
    int n,k; cin>>n>>k;
    vector<int>arr;
    int d = 2;
    while(k && d<=n){
        if(k == 1){
            arr.pb(n);
            k--;
            break;
        }
        if(n%d == 0){
            arr.pb(d);
            n/=d;
            k--;
        }
        else d++;
    }
    if(k == 0){
        for(auto x:arr) cout<<x<<" ";
    }
    else cout<<-1;
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