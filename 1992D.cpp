#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
#define MOD 1000000007

string solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    string s; cin >> s;
    s = 'L' + s + 'L';
    ll pos = 0;
    while (pos <= n) {
        if (s[pos] == 'L' || pos == 0) {
            auto num = s.find('L', pos + 1);
            if (num != string::npos && num <= pos + m) pos = num;
            else pos += m;
        }   
        else if (s[pos] == 'W') {
            while (s[pos] == 'W' && k > 0) {
                pos++;
                k--;
            }
            if (k == 0 && s[pos] == 'W') {
                return "NO";
            }
        } 
        else {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while (tc--) {
        cout << solve() << endl;
    }

    return 0;
}
