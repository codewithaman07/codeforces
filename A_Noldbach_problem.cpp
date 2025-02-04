#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

vector<int> sieve(int n) {
    vector<int> primes;
    vector<bool> isprime(n + 1, true);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (isprime[i]) {
            primes.pb(i);
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
    return primes;
}

void solve() {
    vector<int> primes = sieve(1000);
    int n, k; 
    cin >> n >> k;
    vector<int> isValid;
    for (int i = 1; i < primes.size(); i++) {
        int x = primes[i] + primes[i - 1] + 1;
        if (isPrime(x)) {
            isValid.pb(x);
        }
    }
    int cnt = 0;
    for (int i = 0; i < isValid.size(); i++) {
        if (isValid[i] <= n) cnt++;
    }
    cnt >= k ? cout << "YES" << endl : cout << "NO" << endl;
}

signed main() {
    Aman();
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
