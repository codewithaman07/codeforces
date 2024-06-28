#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef a 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    vector<int> arr(t);
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++) {
        int n = arr[i];
        vector<int> rounds;
        int factor = 1; 
        
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                rounds.push_back(digit * factor);
            }
            n /= 10;
            factor *= 10;
        }

        cout << rounds.size() << endl;
        for (const int& round : rounds) {
            cout << round << " ";
        }
        cout << endl;
    }

    return 0;
}
