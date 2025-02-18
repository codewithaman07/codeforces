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

const int M = 998244353;
const int MAX_N = 2e5 + 10;

vector<int> twos(MAX_N, 1), div2(MAX_N, 1);

void fun() {
    twos[0] = 1;
    for (int i = 1; i < MAX_N; ++i)
        twos[i] = (twos[i-1] * 2) % M;
    
    int inv_2 = (M + 1) / 2;
    div2[0] = 1;
    for (int i = 1; i < MAX_N; ++i)
        div2[i] = (div2[i-1] * inv_2) % M;
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int sum = 0, tsum = 0, cnt = 0, pre2 = 0, ones = 0;
    for (int num : arr) {
        if (num == 1) {
            sum = (sum + div2[pre2]) % M;
            ones++;
        } 
        else if (num == 3) {
            int current_pow = twos[pre2];
            int contribution = (current_pow * sum) % M;
            tsum = (tsum + contribution) % M;
            cnt = (cnt + ones) % M;
        } 
        else pre2++;
    }
    int ans = (tsum - cnt + M) % M;
    cout << ans << endl;
}

signed main() {
    Aman();
    fun();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
