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
    int n; cin>>n;
    string s;
    vector<int>arr(n-2);
    for(int i = 0; i<n-2; i++){
        cin>>arr[i];
        s+=to_string(arr[i]);
    }
    if(s.find("101") != string::npos){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;

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