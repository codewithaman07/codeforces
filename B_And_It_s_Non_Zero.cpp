#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 2e5 + 1;
vector<vector<int>>pre(N,vector<int>(32,0));
void pref(){
    for(int i = 1 ; i<N ; i++){
        string s = bitset<32>(i).to_string();
        vector<int>temp(32,0);
        for(int j = 0 ; j<=31 ; j++){
            temp[j] = (s[j] == '1');
        }
        for(int j = 0 ; j<=31 ; j++){
            pre[i][j] = pre[i-1][j]+temp[j];
        }
    }
}
void solve() {
    int l,r; cin>>l>>r;
    int a = 0;
    for(int i = 0 ; i<=31 ; i++){
        a = max(pre[r][i]-pre[l-1][i],a);
    }
    cout<<r-l+1-a<<endl;
}

signed main() {
    Aman();
    pref();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}