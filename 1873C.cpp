#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
    int t;
    cin >> t;

    while (t--) {
        vector<vector<char>> arr(10, vector<char>(10));
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (arr[i][j] == 'X') {
                    if (i == 0 || j == 0 || i == 9 || j == 9) {
                        ans += 1;
                    } else if (i == 1 || j == 1 || i == 8 || j == 8) {
                        ans += 2;
                    } else if (i == 2 || j == 2 || i == 7 || j == 7) {
                        ans += 3;
                    } else if (i == 3 || j == 3 || i == 6 || j == 6) {
                        ans += 4;
                    } else if (i == 4 || j == 4 || i == 5 || j == 5) {
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
