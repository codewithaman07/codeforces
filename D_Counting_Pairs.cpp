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

void solve() {
    int n, x, y; 
    cin >> n >> x >> y;
    int arr[n+1]; 
    int sum = 0;
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<arr[0]<<"arr0"<<endl;
    sort(arr + 1, arr + n + 1);
    int cnt = 0;
    for (int i = 1; i <= n - 1; i++) {
        int l = sum - y - arr[i];  
        int r = sum - x - arr[i];  
        int lo = lower_bound(arr + i + 1, arr + n + 1, l) - arr;
        int hi = upper_bound(arr + i + 1, arr + n + 1, r) - arr;

        cnt += hi - lo;
    }

    cout << cnt << endl;
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
