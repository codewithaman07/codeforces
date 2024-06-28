#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int, int> mp;
        for (auto it : a) {
            mp[it]++;
        }
        if (mp.size() == 1) {
            cout << -1 << endl;
        } else {
            int e = begin(mp)->ff;
            int freq = begin(mp)->ss;
            cout << freq << " " << n - freq << endl;
            for (int i = 0; i < freq; i++) {
                cout << e << " ";
            }
            cout << endl;
            mp.erase(e);
            for (auto [p, q] : mp) {
                for (int i = 0; i < q; i++) {
                    cout << p << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
