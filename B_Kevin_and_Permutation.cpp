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
    vector<int>arr(n,0);
    int num = 1;
    for(int i = k-1; i<n; i+=k){
        arr[i] = num++;
    }
    for(int i = 0; i<n; i++){
        if(arr[i] == 0) arr[i] = num++;
    }
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
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