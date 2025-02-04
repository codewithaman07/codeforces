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
    for(auto &i: arr) cin>>i;
    int x = -1;
    for(int i = n-2; i>=0; i--){
        if(arr[i]>arr[i+1]){
            x = i;
            break;
        }
    }
    if(x == -1){
        cout<<0<<endl;
        return;
    }
    int pos = x;
    map<int,bool>mp;
    for(int i = 0; i<=x; i++){
        mp[arr[i]] = true;
    }
    for(int i = n-1; i>=x; i--){
        if(mp.find(arr[i]) != mp.end()){
            pos = i;
            break;
        }
    }
    for(int i = x; i<=pos; i++){
        mp[arr[i]] = true;
    }
    cout<<mp.size()<<endl;
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