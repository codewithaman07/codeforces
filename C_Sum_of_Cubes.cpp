#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e13;
vector<int> cubes;
void init() {
    for(int i = 1; i * i * i <= N; i++) cubes.push_back(i * i * i);
}
void solve() {
    int x; 
    cin >> x;
    for(int i = 1; i * i * i <= x; i++) {
        if(binary_search(all(cubes), (x - i * i * i))) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
signed main() {
    Aman();
    init();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
