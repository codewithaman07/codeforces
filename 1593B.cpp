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

int ops(string & last, string &s){
    ll x = last[0];
    ll y = last[1];
    ll steps = 0;
    ll j = s.size()-1;
    while(j>0 && s[j] != y){
        j--;
        steps++;
    }
    ll i = j-1;
    while(i>0 && s[i] != x){
        i--;
        steps++;
    }
    return steps;
}
void solve() {
    string s; cin>>s;
    vector<string> digits = {"00","25","50","75"};
    ll ans = 1e9;
    for(auto digit : digits){
        ll mini = ops(digit,s);
        ans = min(ans,mini);
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
