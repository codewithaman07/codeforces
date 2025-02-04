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
    string s; cin>>s;
    int ans = n+1;
    for(char ch = 'a'; ch<='z'; ch++){
        int cnt = 0, l = 0, r = n-1;
        while(l<=r){
            if(s[l] == s[r]) l++, r--;
            else if(s[l] == ch) l++, cnt++;
            else if(s[r] == ch) r--, cnt++;
            else{
                cnt = n+1;
                break;
            }
        }
        ans = min(ans, cnt);
    }
    if(ans == n+1) ans = -1;
    cout<<ans<<endl;
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