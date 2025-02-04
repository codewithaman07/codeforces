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
    vector<vector<int>>arr(n,vector<int>(m));
    int cnt = 0, mini = INT_MAX, sum = 0, zero = 0;
    f(0,n){
        for(int j = 0 ; j<m ; j++){
            cin>>arr[i][j];
            sum+=abs(arr[i][j]);
            if(arr[i][j]==0) zero++;
            if(arr[i][j]<0) cnt++;
            mini = min(mini,abs(arr[i][j]));
        }
    }
    if(zero || cnt%2==0) cout<<sum<<endl;
    else cout<<sum-2*mini<<endl;
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