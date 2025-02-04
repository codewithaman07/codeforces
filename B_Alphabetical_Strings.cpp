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
    auto pos = s.find('a');
    if(pos == string::npos){
        cout<<"NO"<<endl;
        return;
    }
    int l = pos-1, r = pos+1;
    for(int i = 1; i<n; i++){
        if(l>=0 && s[l] == 'a'+i) l--;
        else if(r<n && s[r] == 'a'+i) r++;
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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