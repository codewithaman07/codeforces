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
    int cnt = 0, len = 0;
    for(int i = 0; i<2*s.size(); i++){
        if(s[i%s.size()] == '1') cnt++;
        else{
            len = max(len , min(cnt , (int)s.size()));
            cnt = 0;
        }
    }
    len = max(len , min(cnt , (int)s.size()));
    if(len == s.size()) cout<<len*len<<endl;
    else cout<<((len+1)/2)*((len+2)/2)<<endl;
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