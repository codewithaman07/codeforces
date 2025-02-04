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

bool fun(vector<int>&a, int m, int n, int x){
    int tot = 0;
    for(int i = 0; i<n; i++){
        if(m > a[i]){
            tot += m-a[i];
            if(tot > x) return 0;
        }
    }
    return tot <= x;
}

void solve() {
    int n,x; cin>>n>>x;
    vector<int>a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    sort(all(a));
    int l = 1, r = INT_MAX;
    while(l<r){
        int m = l+(r-l)/2;
        if(fun(a,m,n,x)){
            l = m+1;
        }
        else r = m;
    }
    cout<<l-1<<endl;
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