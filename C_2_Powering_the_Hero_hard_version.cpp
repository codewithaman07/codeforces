#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;

void solve() {
    int n; 
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin>>arr[i];
    priority_queue<int> pq;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0){ 
            if (!pq.empty()){ 
                ans += pq.top(); 
                pq.pop(); 
            }
        } 
        else pq.push(arr[i]); 
    }
    cout << ans << endl;
}

signed main() {
    Aman();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
