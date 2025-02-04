#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  

void solve() {
    ll n, x,y;
    cin>>n>>x>>y;
    vector<ll>arr(n,0);
    y--; x--;
    int num = -1;
    for(int i = y-1; i>=0; i--){
        arr[i] = num;
        num = -num;
    }
    num = -1;
    for(int i = x+1; i<n; i++){
        arr[i] = num;
        num = -num;
    }
    for(int i = y; i<=x; i++){
        arr[i] = 1;
    }
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}