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
    int n,k;
    cin>>n>>k;
    vector<int>a(k);
    f(0,k) cin>>a[i];
    sort(all(a));
    int ans = 0;
    f(0,k-1){
        if(a[i] == 1) ans++;
        else{
            ans+=((2*a[i])-1);
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}