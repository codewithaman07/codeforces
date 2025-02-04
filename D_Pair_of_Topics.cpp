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
    vector<int>a(n),b(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];
    vector<int>diff(n);
    for(int i = 0; i<n; i++){
        diff[i] = a[i] - b[i];
    }
    sort(all(diff));
    int ans = 0;
    for(int i = 0; i<n; i++){
        int l = i+1, r = n-1, idx = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(diff[mid] + diff[i] > 0){
                idx = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        if(idx != -1){
            ans += n - idx;
        }
    }
    cout<<ans<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}