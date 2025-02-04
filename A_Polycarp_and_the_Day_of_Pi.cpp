#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()

void solve() {
    string s; 
    cin >> s;
    string pi = "314159265358979323846264338327";
    int cnt = 0;
    for(int i = 0 ; i<s.size(); i++){
        if(s[i] == pi[i]){
            cnt++;
        }
        else break;
    }
    cout<<cnt<<endl;
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
