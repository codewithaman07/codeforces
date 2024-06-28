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
   string s; cin>>s;
   ll cnt = 1, maxi = 1;
   for(ll i = 0; i<n-1; i++){
        if(s[i] != s[i+1]){
            cnt = 1;
        }
        else{
            cnt++;
        }
        maxi = max(maxi,cnt);
   } 
   cout<<maxi+1<<endl;
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
