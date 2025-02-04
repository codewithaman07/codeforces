#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x, n) for (int i = x; i < n; i++)
#define all(x) x.begin(), x.end()
const int M = 1e9 + 7;
const int N = 1e6 + 1;

void solve() {
    int n;
    cin >> n;
    set<int> st;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (st.find(x) == st.end()) {
            arr.pb(x);
            st.insert(x);
        }
    }

    vector<int> ans(n);
    vector<bool> used(N, false);

    for (int i = 0; i < arr.size(); i++) {
        ans[i] = arr[i];
        used[arr[i]] = true;
    }

    int next = 1;
    for (int i = arr.size(); i < n; i++) {
        while (used[next]) {
            next++;
        }
        ans[i] = next;
        used[next] = true;
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
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
