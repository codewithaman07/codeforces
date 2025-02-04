#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long

void solve() {
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s.substr(i, 1)]++;
        if (i + 1 < n) mp[s.substr(i, 2)]++;
        if (i + 2 < n) mp[s.substr(i, 3)]++;
    }
    for (char ch = 'a'; ch <= 'z'; ch++) {
        string t(1, ch);
        if (mp.find(t) == mp.end()) {
            cout << t << endl;
            return;
        }
    }
    for (char ch1 = 'a'; ch1 <= 'z'; ch1++) {
        for (char ch2 = 'a'; ch2 <= 'z'; ch2++) {
            string t = string(1, ch1) + string(1, ch2);
            if (mp.find(t) == mp.end()) {
                cout << t << endl;
                return;
            }
        }
    }
    for (char ch1 = 'a'; ch1 <= 'z'; ch1++) {
        for (char ch2 = 'a'; ch2 <= 'z'; ch2++) {
            for (char ch3 = 'a'; ch3 <= 'z'; ch3++) {
                string t = string(1, ch1) + string(1, ch2) + string(1, ch3);
                if (mp.find(t) == mp.end()) {
                    cout << t << endl;
                    return;
                }
            }
        }
    }
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
