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

int fun(vector<int>&a,int c, int m){
    int n = a.size(), num = 0;
    m*=2;
    for(int i = 0; i<n; i++){
        num+=((a[i]+m)*(a[i]+m));
        if(num>c) return -1;
    }
    if(num == c) return 1;
    return 0;
}

void solve() {
    int n,c; cin>>n>>c;
    vector<int>a(n);
    f(0,n) cin>>a[i];
    sort(all(a));
    int l = 0, r = 1e9;
    while(l<=r){
        int m = l+(r-l)/2;
        int num = fun(a,c,m);
        if(num == 1){
            cout<<m<<endl;
            return;
        }
        else if(num == 0) l = m+1;
        else r = m-1;
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