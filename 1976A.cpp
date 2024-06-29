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
    ll n; cin>>n;
    string s; cin>>s;
    for(ll i = 0; i<n-1; i++){
        if(isalpha(s[i]) && isdigit(s[i+1])){
            cout<<"NO"<<endl;
            return;
        }
        else if(isdigit(s[i]) && isalpha(s[i+1])) continue;
        else if(s[i]>s[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
