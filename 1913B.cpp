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
    ll n = s.size(), zeros = 0, ones = 0;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    f(0,n){
        if(s[i] == '0'){
            zeros++;
        }
        else ones++;
    }
    if(zeros == ones){
        cout<<0<<endl;
        return;
    }
    ll ans = 0;
    f(0,n){
        if(s[i] == '0' && ones>0){
            ones--;
        }
        else if(s[i] == '1' && zeros>0){
            zeros--;
        }
        else{
            ans = n-i;
            break;
        }
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
