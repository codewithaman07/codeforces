#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x, n) for (ll i = x; i < n; i++)
#define all(x) x.begin(), x.end()

void solve() {
    ll n; 
    cin >> n;
    if (n%2 != 0 || n<4){
        cout << -1 << endl;
        return;
    }
    ll maxi = n/4;
    ll mini = n/6;
    if(n%6){
        mini+=1;
    }
    cout<<mini<<" "<<maxi<<endl;
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
