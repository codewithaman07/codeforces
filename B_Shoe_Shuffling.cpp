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
    vector<int>arr(n), temp(n);
    f(0,n) cin>>arr[i];
    f(0,n) temp[i] = i+1;
    for(int i = 1; i<n; i++){
        if(arr[i] == arr[i-1]) swap(temp[i], temp[i-1]);
    }
    f(0,n){
        if(temp[i] == i+1){
            cout<<-1<<endl;
            return;
        }
    }
    f(0,n) cout<<temp[i]<<" ";
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