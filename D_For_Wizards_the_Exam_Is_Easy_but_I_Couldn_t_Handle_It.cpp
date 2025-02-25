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
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    int l = 0, r = 0, maxi = 0, curr = 0;
    for(int i = 0; i<n; i++){
        curr = 0;
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]) curr++;
            else if(arr[i] < arr[j]) curr--;
            if(curr > maxi){
                maxi = curr;
                l = i;
                r = j;
            }
        }
    } 
    cout<<l+1<<" "<<r+1<<endl;
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