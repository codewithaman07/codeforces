#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second

const int MOD = 1e9 + 7;

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
        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char>(m, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arr[i][j];
            }
        }

        int l = INT_MAX, r = INT_MIN, t = INT_MAX, b = INT_MIN;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (arr[i][j] == '#') {
                    l = min(l, j);
                    r = max(r, j);
                    t = min(t, i);
                    b = max(b, i);
                }
            }
        }
        int centerX = (l + r) / 2;
        int centerY = (t + b) / 2;

        cout << centerY + 1 << " " << centerX + 1 << endl;
    }
    
    return 0;
}
