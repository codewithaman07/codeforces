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
    vector<vector<int>>arr(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++) cin>>arr[i][j];
    }
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j] != arr[n-i-1][n-j-1]) cnt++;
        }
    }
    cnt/=2;
    if(k<cnt){
        cout<<"NO"<<endl;
        return;
    }
    k-=cnt;
    if(n&1){
        cout<<"YES"<<endl;
        return;
    }
    if(k&1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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