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

void fun(string &s, int i, int j, int n, vector<string>&ans){
    if(ans.size() == n) return;
    if(i == n && j == n){
        ans.push_back(s);
        return;
    }
    if(i<n) {
        s.push_back('(');
        fun(s, i+1, j, n, ans);
        s.pop_back();
    }
    if(j<i) {
        s.push_back(')');
        fun(s, i, j+1, n, ans);
        s.pop_back();
    }
}

void solve() {
    int n; cin>>n;
    vector<string>ans;
    string s;
    fun(s,0,0,n,ans);
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<endl;
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