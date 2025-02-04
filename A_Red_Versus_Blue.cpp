#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n,r,b; cin>>n>>r>>b;
    int x = r/(b+1);
    int extra = r%(b+1);
    if(b == 1){
        for(int i = 0; i<r/2; i++){
            cout<<"R";
        }
        if(r%2){
            cout<<"R";
        }
        cout<<"B";
        for(int i = 0; i<r/2; i++){
            cout<<"R";
        }
        cout<<endl;
        return;
    }
    string s;
    for(int i = 0; i<b; i++){
        for(int j = 0; j<x; j++){
            s += "R";
        }
        if(extra){
            s += "R";
            extra--;
        }
        s+="B";
    }
    for(int i = 0; i<x; i++){
        s += "R";
    }
    if(extra){
        s+="R";
    }
    cout<<s<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}