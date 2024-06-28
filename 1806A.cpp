#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second

const int MOD = 1e9 + 7;

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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        int deltaY = d - b;
        cout<<"DeltaY "<<deltaY<<endl;
        int deltaX = c - a;
        cout<<"deltax "<<deltaX<<endl;
        if (deltaY < 0) {
            cout << -1 << endl;
            cout<<"1st"<<endl;
        } else {
            a += deltaY; 
            ans += deltaY;
            deltaX = c - a;

            if (deltaX < 0) {
                cout << -1 << endl;
                cout<<"2nd"<<endl;
            } else {
                ans += deltaX; 
                cout << ans << endl;
                cout<<"3rd"<<endl;
            }
        }
    }
    
    return 0;
}
