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
    int n; 
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i]; 
    vector<int> arr;
    arr.pb(vec[0]);  
    for(int i = 1; i < n; i++){
        int option1 = arr.back() + vec[i];
        int option2 = arr.back() - vec[i];
        if (option1 >= 0 && option2 >= 0 && option1 != option2) {
            cout << -1 << endl;
            return;
        }
        if (option1 >= 0) arr.pb(option1);
        else arr.pb(option2);
        
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

signed main() {
    Aman();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
