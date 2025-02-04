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
    int n; cin>>n;
    vector<string>arr;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        arr.push_back(s);
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            int cnt = 0;
            if(arr[i][j] == '1') cnt++;
            if(arr[j][n-i-1] == '1') cnt++;
            if(arr[n-i-1][n-j-1] == '1') cnt++;
            if(arr[n-j-1][i] == '1') cnt++;
            ans+=min(cnt, 4LL-cnt);
        }
    }
    cout<<ans/4<<endl;
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