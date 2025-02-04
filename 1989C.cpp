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
    vector<ll>a(n),b(n);
    f(0,n) cin>>a[i];
    f(0,n) cin>>b[i];
    ll pos = 0, neg = 0;
    ll f = 0, s = 0;
    f(0,n){
        if(a[i] == 1 && b[i] == 1){
            pos++;
        }
        else if(a[i] == -1 && b[i] == -1){
            neg++;
        }
        else{
            if(a[i]>=b[i]) f+=a[i];
            else s+=b[i];
        }
    }
    while(pos--){
        if(f>=s){
            s++;
        }
        else f++;
    }
    while(neg--){
        if(f>=s){
            f--;
        }
        else s--;
    }
    cout<<min(f,s)<<endl;
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
