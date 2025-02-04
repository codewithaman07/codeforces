#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 998244353;
const int N = 1e6 + 1;


void solve() {
    string s; cin>>s;
    int n = s.size(), ans = 0, cnt = 1, temp = 0, fact = 1;
    for(int i = 0; i<n-1; i++){
        if(s[i] == s[i+1]) temp++;
        else{
            ans+=temp;
            temp++;
            cnt = (cnt%M * temp%M)%M;
            temp = 0;
        }
    }
    if(temp){
        ans+=temp;
        temp++;
        cnt = (cnt%M * temp%M)%M;
    }
    for(int i = 1; i<=ans; i++) fact = (fact%M * i%M)%M;
    cnt = (cnt%M * fact%M)%M;
    cout<<ans<<" "<<cnt<<endl;
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