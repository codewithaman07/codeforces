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
const int INF=1e18;

void solve() {
    int n,m,k; cin>>n>>m>>k;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>a[i][j];
    }
    vector<int>prev(m,INF), curr(m,INF), rotated(m,INF);
    prev[0] = 0;
    for(int i = 0; i<n; i++){
        curr = vector<int>(m,INF);
        for(int rot = 0; rot<m; rot++){
            rotated = vector<int>(m,INF);
            for(int j = 0; j<m; j++){
                int val = a[i][(j+rot)%m];
                rotated[j] = min(rotated[j], prev[j]+val+k*rot);
                if(j) rotated[j] = min(rotated[j], rotated[j-1]+val);
            }
            for(int j = 0; j<m; j++){
                curr[j] = min(curr[j], rotated[j]);
            }
        }
        prev = curr;
    }
    cout<<prev[m-1]<<endl;
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
