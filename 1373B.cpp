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
    string s; cin>>s;
    ll zeros = 0, n = s.size();
    f(0,n){
        if(s[i] == '0'){
            zeros++;
        }
    }
    ll ones = n-zeros;
    ll mini = min(ones, zeros);
    if(mini &1){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
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
