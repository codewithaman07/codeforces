#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(__null);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int mod = 1e9+7;
void solve() {
    int n,s,m; cin>>n>>s>>m;
    vector<pair<int,int>>arr(n);
    for(int i = 0; i<n; i++){
        int a,b;
        cin>>a>>b;
        arr[i] = {a,b};
    }
    if(arr[0].first>=s || (m-arr[n-1].second)>=s){
        cout<<"YES"<<endl; 
        return;
    }
    for(int i = 1; i<n; i++){
        if((arr[i].first - arr[i-1].second)>=s){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

signed main() {
    fastio()


    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}