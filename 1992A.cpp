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

void solve() {
    vector<int> arr(3);
    f(0, 3) cin >> arr[i];
    sort(all(arr));
    
    int increments = 5;
    
    while (increments > 0) {
        if (arr[0] <= arr[1] && arr[0] <= arr[2]) {
            arr[0]++;
        } else if (arr[1] <= arr[0] && arr[1] <= arr[2]) {
            arr[1]++;
        } else {
            arr[2]++;
        }
        increments--;
    }
    
    cout << arr[0] * arr[1] * arr[2] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
