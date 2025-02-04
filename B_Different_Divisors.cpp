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
vector<bool>prime(N+1, true);
vector<int>primes;

void solve() {
    int d; 
    cin >> d;
    int p1 = *lower_bound(all(primes), 1 + d);
    int p2 = *lower_bound(all(primes), p1 + d);
    cout << p1 * p2 << endl;
}

signed main() {
    Aman();

    int tc = 1;
    cin >> tc;

    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= N; i++) {
        if (prime[i]) {
            primes.pb(i);
        }
    }

    while (tc--) {
        solve();
    }
    return 0;
}
