#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
#define MOD 1000000007

void solve() {
    ll n; char ch;
    cin>>n>>ch;
    string s; cin>>s;
    s+=s;
    ll ans = 0;
    if(ch == 'g'){
        cout<<0<<endl;
        return;
    }
    f(0,n){
        if(s[i] == ch){
            ll cnt = 0;
            while(s[i] != 'g'){
                cnt++;
                i++;
            }
            i--;
            ans = max(ans,cnt);
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
