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
       ll n,k,x;
       cin>>n>>k>>x;
       ll maxi = (n*(n+1))/2 - ((n - k) * (n - k + 1)) / 2;
       ll mini = (k*(k+1))/2;
       if(x>=mini && x<=maxi){
            cout<<"YES"<<endl;
       } 
       else{
            cout<<"NO"<<endl;
       }
    }
    
    return 0;
}
