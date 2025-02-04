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
    int n; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    if(arr[n-2] > arr[n-1]) cout<<-1<<endl;
    else if(arr[n-1] < 0){
        if(is_sorted(all(arr))) cout<<0<<endl;
        else cout<<-1<<endl;
    }
    else{
        cout<<n-2<<endl;
        for(int i = 1; i<=n-2; i++){
            cout<<i<<" "<<n-1<<" "<<n<<endl;
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