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
       int n,a,b;
       cin>>n>>a>>b;
       if(a+b >= n-1){
            if(a == n && b == n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
       } 
       else{
            cout<<"YES"<<endl;
       }
    }
    
    return 0;
}
