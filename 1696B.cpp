#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  

void solve() {
    ll n; cin>>n;
    ll num, cnt = 0, curr = 0;
    for(ll i = 0; i<n; i++){
        cin>>num;
        if(num){
            curr = 1;
        }
        else if(curr){
            cnt++;
            curr = 0;
        }
    }
    cnt+=curr;
    cnt = (cnt<2)? cnt : 2;
    cout<<cnt<<endl;
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
