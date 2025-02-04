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
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    int sum = accumulate(all(arr),0ll);
    int ans = -1e18;
    ans = max(ans,sum);
    for(int i = 1; i<n; i++){
        if(arr.size() == 1) break;
        if(arr[0] > arr.back()) reverse(all(arr));
        vector<int>temp;
        for(int j = 1; j<arr.size(); j++){
            temp.pb(arr[j] - arr[j-1]);
        }
        int tempsum = accumulate(all(temp),0ll);
        arr = temp;
        ans = max(ans,tempsum);
    }
    cout<<ans<<endl;
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