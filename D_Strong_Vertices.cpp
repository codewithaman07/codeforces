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
    vector<int>arr(n), brr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int j = 0; j<n; j++) cin>>brr[j];
    vector<pair<int,int>>nums;
    for(int i = 0; i<n; i++){
        nums.pb({arr[i]-brr[i], i+1});
    }
    sort(all(nums));
    vector<int>ans;
    int temp = nums[n-1].first;
    for(int i = n-1; i>=0; i--){
        if(nums[i].first == temp) ans.pb(nums[i].second);
        else break;
    }
    sort(all(ans));
    cout<<ans.size()<<endl;
    for(int num : ans) cout<<num<<" ";
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