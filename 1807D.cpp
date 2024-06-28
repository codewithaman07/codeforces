#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  

void solve() {
    int n,q; 
    cin>>n>>q;
    vector<int>arr(n+1);
    for(int i = 1; i<=n; i++){
        cin>>arr[i];
    }
    vector<int>pre(n+1,0);
    for(int i = 1; i<=n; i++){
        pre[i] = pre[i-1]+arr[i];
    }
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int org = pre[n];
        int sum = +pre[r]-pre[l-1]+((r-l+1)*k);
        int new_sum = org-sum;
        if(new_sum&1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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
