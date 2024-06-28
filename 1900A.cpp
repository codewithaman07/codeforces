#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef a
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin>>n;
        string s;
        cin >> s;
        int cnt = 0;
        bool flag = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '.') {
                cnt++;
            }
            if (i > 0 && i < s.length() - 1 && s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
                cout << 2 << endl;
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << cnt << endl;
        }
    }
    return 0;
}
