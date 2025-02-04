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
    f(0,n) cin>>arr[i];
    priority_queue<int>pq;
    for(int i = 0; i<n; i++){
        pq.push(arr[i]);
    }
    vector<int>ans(n);
    for(int i = 0; i<n; i++){
        if(arr[i] == pq.top()){
            int x = pq.top();
            pq.pop();
            ans[i] = arr[i]-pq.top();
            pq.push(x);
        }
        else{
            ans[i] = arr[i]-pq.top();
        }
    }
    for(auto &x: ans){
        cout<<x<<" ";
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