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
    vector<pair<int,int>>arr(n);
    f(0,n){
        int x; cin>>x;
        arr[i] = {x,i+1};
    }
    sort(all(arr));
    int ans = 0;
    for(int i = 0; i<n; i++){
        int a = arr[i].first;
        int ai = arr[i].second;
        for(int j = i+1; j<n; j++){
            int b = arr[j].first;
            int bi = arr[j].second;
            if((a*b) == (ai+bi)){
                ans++;
            }
            else if((a*b) > 2*n){
                break;
            }
        }
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