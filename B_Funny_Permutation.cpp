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
    vector<int> v;
    if(n%2 == 0){
        for(int i = n; i>=1; i--){
            v.pb(i);
        }
    }
    else{
        if(n == 3 || n == 2){
            cout<<-1<<endl;
            return;
        }
        else{
            int x = n/2;
            for(int i = n; i>=1; i--){
                v.pb(i);
            }
            reverse(v.begin()+x,v.end());
        }
    }
    for(auto x: v){
        cout<<x<<" ";
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