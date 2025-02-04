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
    vector<int>ind(n+1, 0);
    vector<int>adj[n+1];
    for(int i = 1; i<=n; i++){
        int x; cin>>x;
        ind[x]++;
        adj[i].pb(x);
    }
    queue<int>q;
    int level = 2;
    for(int i = 1; i<=n; i++){
        if(ind[i] == 0) q.push(i);
    }
    while(q.size()){
        level++;
        int n = q.size();
        while(n--){
            int node = q.front();
            q.pop();
            for(auto &child : adj[node]){
                ind[child]--;
                if(ind[child] == 0) q.push(child);
            }
        }
    }
    cout<<level<<endl;
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