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
    int n,l,r; cin>>n>>l>>r;
    vector<int>arr(n+1,0);
    for(int i = 1; i<=n; i++){
        int temp = (l+i-1)/i*i;
        if(temp > r){
            cout<<"NO"<<endl;
            return;
        }
        arr[i] = temp;
    }
    cout<<"YES"<<endl;
    for(int i = 1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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