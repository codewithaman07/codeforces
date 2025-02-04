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
    vector<int>a(n), pre;
    pre.pb(0);
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum += a[i];
        pre.pb(sum);
    }
    int ans = 0;
    for(int i = 1; i<=n; i++){
        vector<int>temp;
        if(n%i == 0){
            for(int j = i; j<=n; j+=i){
                temp.pb(pre[j] - pre[j-i]);
            }
            sort(all(temp));
            ans = max(ans, temp[temp.size()-1]-temp[0]);
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