#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second

const int MOD = 1e9 + 7;

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
       ll a,b; cin>>a>>b;
       ll xk,yk; cin>>xk>>yk;
       ll xq,yq; cin>>xq>>yq;

       vector<pair<ll, ll>>dir = {{a,b},{a,-b},{-a,b},{-a,-b},
                                   {b,a},{-b,a},{b,-a},{-b,-a}};
       set<pair<ll, ll>>st1;
       set<pair<ll, ll>>st2;
       for(auto it : dir){
            int x = xk+ it.first;
            int y = yk + it.second;
            st1.insert({x,y});
       }
       for(auto it : dir){
            int x = xq+ it.first;
            int y = yq + it.second;
            st2.insert({x,y});
       }
       int ans = 0;
       for(auto it : st1){
            if(st2.find(it) != st2.end()){
                ans++;
            }
       }
       cout<<ans<<endl;

    }
    
    return 0;
}
