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
    int n, x, y; 
    cin >> n >> x >> y;

    vector<int> adj[n + 1];
    for (int i = 1; i <= n; i++) {
        if (i == 1) adj[i].pb(n);
        else adj[i].pb(i - 1);

        if (i == n) adj[i].pb(1);
        else adj[i].pb(i + 1);
    }
    adj[x].pb(y);
    adj[y].pb(x);

    vector<int> arr(n + 1, -1);
    arr[x] = 0;
    arr[y] = 1;

    queue<int> q;
    q.push(x);
    q.push(y);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (auto i : adj[node]) {
            if (arr[i] == -1) {
                vector<int> temp;
                for (auto j : adj[i]) {
                    if (arr[j] != -1) temp.pb(arr[j]);
                }

                int num = 0;
                set<int> s(all(temp));
                while (s.find(num) != s.end()) num++;
                arr[i] = num;
                q.push(i);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (arr[i] == -1) arr[i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] <<" ";
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
