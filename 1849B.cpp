#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
#define MOD 1000000007

void solve() {
    ll n, k; cin>>n>>k;
    vector<int>arr(n);
    f(0,n) cin>>arr[i];
    vector<pair<int,int>>nums;
    f(0,n){
        if(arr[i]%k == 0){
            nums.pb({k,-i});
        }
        else{
            nums.pb({arr[i]%k, -i});
        }
    }
    sort(all(nums));
    for(int i = n-1; i>=0; i--){
        cout<<abs(nums[i].ss)+1<<" ";
    }cout<<endl;
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
