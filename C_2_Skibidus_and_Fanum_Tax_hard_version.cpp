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
    int n,m; cin>>n>>m;
    vector<int>arr(n), brr(m);
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int i = 0; i<m; i++) cin>>brr[i];
    sort(all(brr));
    arr[0] = min({arr[0], brr[0]-arr[0], brr[m-1]-arr[0]});
    for(int i = 1; i<n; i++){
        int x = lower_bound(all(brr), arr[i-1]+arr[i]) - brr.begin();
        if(arr[i-1]<=arr[i]){
            if(x<m) arr[i] = min(arr[i], brr[x]-arr[i]);
        }
        else{
            if(x<m) arr[i] = brr[x]-arr[i];
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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