#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n,x; cin>>n>>x;
    vector<int>arr(n);
    int curr = 0;
    for(int i = 0; i<n; i++){
        if((curr | i) <= x){
            arr[i] = i;
            curr |= i;
        }
        else arr[i] = 0;
    }
    int temp = 0;
    for(int i = 0; i<n; i++){
        temp |= arr[i];
    }
    if(temp != x){
        for(int i = 0; i<n-1; i++){
            if((i & ~x) != 0) arr[i] = x;
        }
        arr[n-1] = x;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}