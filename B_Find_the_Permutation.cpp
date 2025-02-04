#include <bits/stdc++.h>
using namespace std;

#define fio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
    vector<vector<int>> adj(n, vector<int>(n));
    vector<int> degree(n, 0);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            adj[i][j] = s[j] - '0';
            if (adj[i][j]) degree[i]++;
        }
    }

    vector<pair<int, int>> vec;
    for (int i = 1; i <= n; i++) {
        vec.pb({degree[i - 1], i});
    }

    sort(vec.begin(), vec.end(), [&](pair<int, int> a, pair<int, int> b) {
        if (a.second < b.second) {
            return adj[a.second - 1][b.second - 1] == 1;
        }
        return adj[a.second - 1][b.second - 1] == 0;
    });

    for (int i = 0; i < n; i++) {
        cout << vec[i].second << " ";
    }
    cout << endl;
}

signed main() {
    fio();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
