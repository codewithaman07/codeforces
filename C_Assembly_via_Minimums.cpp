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
    int m = n*(n-1)/2;
    int arr[m];
    for(int i = 0; i<m; i++) cin>>arr[i];
    sort(arr, arr+m);
    for(int i = 0; i<m; i+= --n){
        cout<<arr[i]<<" ";
    }
    cout<<1000000000<<endl;
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