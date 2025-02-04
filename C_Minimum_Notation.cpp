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
    int n = s.size();
    int mini = 9;
    for(int i = n-1; i>=0; i--){
        int x = s[i]-'0';
        if(x<=mini) mini = x;
        else s[i] = min(x+1,9LL)+'0';
    }
    sort(all(s));
    cout<<s<<endl;
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