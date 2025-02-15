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
    int x,y; cin>>x>>y;
    if(y == x+1){
        cout<<"Yes"<<endl;
        return;
    }
    if(x>y){
        int diff = x-y+1;
        if(diff%9 == 0 && diff>=9){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
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