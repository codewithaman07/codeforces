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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            a[i][j] = ch - '0';
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            b[i][j] = ch - '0';
        }
    }
    int ans = 0;
    f(0,n){
        int s1 = 0, s2 = 0;
        for(int j = 0; j<m; j++){
            s1+=a[i][j];
            s2+=b[i][j];
        }
        s1%=3;
        s2%=3;
        ans+=abs(s1-s2);
    }
    if(ans){
        cout<<"NO"<<endl;
        return;
    }
    ans = 0;
    for(int j = 0; j<m; j++){
        int s1 = 0, s2 = 0;
        for(int i = 0; i<n; i++){
            s1+=a[i][j];
            s2+=b[i][j];
        }
        s1%=3;
        s2%=3;
        ans+=abs(s1-s2);
    }
    if(ans){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

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
        solve();
    }

    return 0;
}
