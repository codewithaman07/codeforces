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
    f(0,n) cin>>arr[i];
    int ans = 0, cnt = 0, inv = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 1){
            cnt++;
        }
        else inv+=cnt;
    }
    ans = max(ans,inv);
    vector<int>v = arr;
    for(int i = 0; i<n; i++){
        if(v[i] == 0){
            v[i] = 1;
            break;
        }
    }
    cnt = 0;
    inv = 0;
    for(int i = 0; i<n; i++){
        if(v[i] == 1){
            cnt++;
        }
        else inv+=cnt;
    }
    ans = max(ans,inv);
    v = arr;
    for(int i = n-1; i>=0; i--){
        if(v[i] == 1){
            v[i] = 0;
            break;
        }
    }
    cnt = 0;
    inv = 0;
    for(int i = 0; i<n; i++){
        if(v[i] == 1){
            cnt++;
        }
        else inv+=cnt;
    }
    ans = max(ans,inv);
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