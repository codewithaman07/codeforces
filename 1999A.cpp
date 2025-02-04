#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i < n ; i++) 
#define all(x) x.begin(),x.end()  
const int mod = 1e9+7;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (s[i] - '0');
    }
    cout << ans << endl;
}

int32_t main() {
    fastio();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
