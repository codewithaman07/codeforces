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
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    vector<int>dist(n,-1);
    for(int i = n-2; i>=0; i--){
        if(arr[i] != arr[i+1]) dist[i] = i+1;
        else dist[i] = dist[i+1];
    }
    int q; cin>>q;
    while(q--){
        int l,r; cin>>l>>r;
        l--; r--;
        if(dist[l] != -1 && dist[l] <= r) cout<<l+1<<" "<<dist[l]+1<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
    cout<<endl;
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