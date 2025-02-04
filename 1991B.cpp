#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int mod = 1e9+7;
const int N = 2e5+20;
ll n, arr[N];
void solve() {
    cin>>n;
    vector<ll>brr(n-1), arr(n);
    f(0,n-1) cin>>brr[i];
    arr[0] = brr[0];
    for(int i = 1; i<n-1; i++){
        arr[i] = brr[i-1] | brr[i];
    }
    arr[n-1] = brr[n-2];
    for(int i = 0; i<n-1; i++){
        if((arr[i]&arr[i+1]) != brr[i]){
            cout<<-1<<endl;
            return;
        }
    }
    f(0,n){
        cout<<arr[i]<<" ";
    }
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

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}