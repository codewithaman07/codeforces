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
    vector<int>cnt(26,0);
    for(int i = 0; i<n; i++){
        cnt[s[i]-'a']++;
    }
    string ans;
    int f = 1;
    while(f){
        f = 0;
        for(int i = 0; i<26; i++){
            if(cnt[i]>0){
                ans+=(i+'a');
                cnt[i]--;
                f = 1;
            }
        }
    }
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