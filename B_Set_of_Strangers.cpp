#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

void solve() {
    int n,m; cin>>n>>m;
    vector<vector<int>>arr(n, vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            maxi = max(maxi, arr[i][j]);
        }
    }
    vector<int>op(maxi+1, 0);
    vector<bool>vis(maxi+1, 0);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            vis[arr[i][j]] = 1;
            if(op[arr[i][j]] == 0) op[arr[i][j]] = 1;
            if((j+1<m && arr[i][j+1] == arr[i][j]) || (i+1<n && arr[i+1][j] == arr[i][j])){
                op[arr[i][j]] = 2;
            }
        }
    }
    int temp = 0, ans = 0;
    for(int i = 1; i<=maxi; i++){
        if(vis[i]){
            ans+=op[i];
            temp = max(temp, op[i]);
        }
    }
    cout<<ans-temp<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}