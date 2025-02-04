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
    string s; cin>>s;
    int n = s.size(), cnt = 0;
    vector<int>a(n), b(n);
    for(int i = 0; i<n; i++){
        int temp = s[i] - '0';
        if(temp%2 == 0) a[i] = temp/2, b[i] = temp/2;
        else{
            if(cnt%2 == 0){
                a[i] = temp/2;
                b[i] = temp/2 + 1;
            }
            else{
                a[i] = temp/2 + 1;
                b[i] = temp/2;
            }
            cnt++;
        }
    }
    int ans = 0, res = 0;
    for(int i = 0; i<n; i++){
        ans = ans*10 + a[i];
    }
    for(int i = 0; i<n; i++){
        res = res*10 + b[i];
    }
    cout<<ans<<" "<<res<<endl;
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