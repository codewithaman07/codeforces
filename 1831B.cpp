#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
#define MOD 1000000007

void solve() {
    int n; cin>>n;
    vector<int>a(n), b(n);
    f(0,n) cin>>a[i];
    f(0,n) cin>>b[i];
    int maxi = INT_MIN;
    vector<int>fa(2*n+1, 0), fb(2*n+1, 0);
    for(int i = 0; i<n; i++){
        int val = a[i];
        int cnt = 0;
        while(i<n && a[i] == val){
            cnt++;
            i++;
        }
        i--;
        fa[val] = max(fa[val], cnt);
    }
    for(int i = 0; i<n; i++){
        int val = b[i];
        int cnt = 0;
        while(i<n && b[i] == val){
            cnt++;
            i++;
        }
        i--;
        fb[val] = max(fb[val], cnt);
    }
    int ans = 0;
    for(int i = 1; i<=2*n; i++){
        ans = max(ans,fa[i]+fb[i]);
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
