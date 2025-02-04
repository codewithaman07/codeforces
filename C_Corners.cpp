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
    vector<vector<int>> arr(n,vector<int>(m));
    int cnt = 0;
    for(int i = 0; i<n; i++){
        string s; cin>>s;
        for(int j = 0; j<m; j++){
            arr[i][j] = s[j] - '0';
            if(arr[i][j] == 1) cnt++;
        }
    }
    int dr[] = {0,0,1,1,1,-1,-1,-1};
    int dc[] = {1,-1,0,1,-1,0,1,-1};
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            for(int k = 0; k<8; k++){
                int x = i + dr[k];
                int y = j + dc[k];
                if(x>=0 && x<n && y>=0 && y<m && arr[i][j] == 0 && arr[x][y] == 0){
                    cout<<cnt<<endl;
                    return;
                }
            }
        }
    }
    if(cnt == n*m) cout<<cnt-2<<endl;
    else cout<<cnt-1<<endl;
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