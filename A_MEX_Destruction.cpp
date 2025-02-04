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
    int n; 
    cin >> n;
    vector<int> arr(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) cnt++;
    }
    if (cnt == n) {
        cout << 0 << endl;
        return;
    }
    int start = 0, end = n - 1;
    while (start < n && arr[start] == 0) {
        start++;
    }
    while (end >= 0 && arr[end] == 0) {
        end--;
    }
    for (int i = start; i <= end; i++) {
        if (arr[i] == 0) {
            cout << 2 << endl;
            return;
        }
    }
    cout << 1 << endl;
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
