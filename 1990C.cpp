#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define f(x, n) for (ll i = x; i < n; i++)

const int N = 2e5 + 20;
int n;
int cnt[N];
int arr[N];
ll ans = 0;

void func() {
    for (int i = 1; i <= n; i++) cnt[i] = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        ans+=val;
        cnt[val]++;
        if (cnt[val] >= 2) maxi = max(maxi, val);
        arr[i] = maxi;
    }
}

void solve() {
    cin >> n;
    f(0, n) cin >> arr[i];
    
    ans = 0;
    func(); func();

    for (int i = 0; i <n; i++) {
        ans += 1ll * arr[i] * (n - i);
    }
    
    cout << ans << endl;
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
