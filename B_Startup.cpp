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
    map<int,int>mp;
    for(int i = 0; i<k; i++){
        int x,y; cin>>x>>y;
        mp[x]+=y;
    }
    priority_queue<int>pq;
    for(auto x: mp){
        pq.push(x.second);
    }
    int ans = 0;
    while(n-- && !pq.empty()){
        int temp = pq.top();
        pq.pop();
        ans+=temp;
    }
    cout<<ans<<endl;
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