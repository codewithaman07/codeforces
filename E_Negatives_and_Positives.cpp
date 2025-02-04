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
    vector<int>a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    int sum = 0, mini = INT_MAX, cnt = 0;
    for(int i = 0; i<n; i++){
        if(a[i]<0) cnt++;
        sum+=abs(a[i]);
        mini = min(mini,abs(a[i]));
    }
    if(cnt&1) cout<<sum-mini*2<<endl;
    else cout<<sum<<endl;
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