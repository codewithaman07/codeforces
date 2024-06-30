#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    for (int j = 1; j < n - 1; ++j) {
        for (int i = 0; i < j; ++i) {
            if (p[i] < p[j]) {
                for (int k = j + 1; k < n; ++k) {
                    if (p[j] > p[k]) {
                        cout << "YES" << endl;
                        cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
