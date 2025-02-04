#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(__null);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int mod = 1e9+7;
void solve() {
    string s,t; cin>>s>>t;
    int n = s.size(), m = t.size(), cnt = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '?') cnt++;
    }

    int i = 0, j = 0;
    while(i<n && j<m){
        if(s[i] == t[j]){
            i++; j++;
        }
        else if(s[i] == '?'){
            s[i] = t[j]; i++; j++;
        }
        else i++;
    }
    if(i>=n && j<m) cout<<"NO"<<endl;
    else{
        for(int i = 0; i<n; i++){
            if(s[i] == '?') s[i] = 'l';
        }
        cout<<"YES"<<endl;
        cout<<s<<endl;
        return;
    }
}

signed main() {
    fastio()

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}