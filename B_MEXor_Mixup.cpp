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

int fun(int a){
    if(a%4 == 0) return a;
    if(a%4 == 1) return 1;
    if(a%4 == 2) return a+1;
    if(a%4 == 3) return 0;
}

void solve() {
    int a,b; cin>>a>>b;
    int x = fun(a-1);
    if(x == b){
        cout<<a<<endl;
    }
    else if((x^b) != a) cout<<a+1<<endl;
    else cout<<a+2<<endl;
    
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