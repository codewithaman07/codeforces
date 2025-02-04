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
    ll n; cin >> n;
    vector<ll> a(n), b(n), c(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    for(ll i = 0; i < n; i++) cin >> c[i];
    
    ll sum = accumulate(all(a), 0LL);
    sum = (sum + 2) / 3;
    
    auto func = [&](vector<ll>& a, vector<ll>& b, vector<ll>& c) {
        ll A = 0, B = 0, C = 0;
        vector<ll> part;
        for(ll i = 0; i < n; i++) {
            A += a[i], B += b[i], C += c[i];
            if(part.size() == 0 && A >= sum) {
                part.pb(i + 1);
                A = 0, B = 0, C = 0;
            }
            else if(part.size() == 1 && B >= sum) {
                part.pb(i + 1);
                A = 0, B = 0, C = 0;
            }
            else if(part.size() == 2 && C >= sum) {
                part.pb(i + 1);
                A = 0, B = 0, C = 0;
            }
        }
        return part;
    };
    
    if(func(a, b, c).size() == 3) {
        vector<ll> ans = func(a, b, c);
        cout << 1 << " " << ans[0] << " " << ans[0] + 1 << " " << ans[1] << " " << ans[1] + 1 << " " << n << "\n";
    }
    else if(func(a, c, b).size() == 3) {
        vector<ll> ans = func(a, c, b);
        cout << 1 << " " << ans[0] << " " << ans[1] + 1 << " " << n << " " << ans[0] + 1 << " " << ans[1] << "\n";
    }
    else if(func(b, a, c).size() == 3) {
        vector<ll> ans = func(b, a, c);
        cout << ans[0] + 1 << " " << ans[1] << " " << 1 << " " << ans[0] << " " << ans[1] + 1 << " " << n << "\n";
    }
    else if(func(b, c, a).size() == 3) {
        vector<ll> ans = func(b, c, a);
        cout << ans[1] + 1 << " " << n << " " << 1 << " " << ans[0] << " " << ans[0] + 1 << " " << ans[1] << "\n";
    }
    else if(func(c, a, b).size() == 3) {
        vector<ll> ans = func(c, a, b);
        cout << ans[0] + 1 << " " << ans[1] << " " << ans[1] + 1 << " " << n << " " << 1 << " " << ans[0] << "\n";
    }
    else if(func(c, b, a).size() == 3) {
        vector<ll> ans = func(c, b, a);
        cout << ans[1] + 1 << " " << n << " " << ans[0] + 1 << " " << ans[1] << " " << 1 << " " << ans[0] << "\n";
    }
    else cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}
