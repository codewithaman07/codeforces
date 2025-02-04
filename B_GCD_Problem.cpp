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
    int n; cin>>n;
    int a,b,c = 1;
    for(int i = 1; ; i++){
        a = i;
        b = n-i-1;
        if(__gcd(a,b) == c){
            if(a!=b && b!=c && a!=c){
                cout<<a<<" "<<b<<" "<<c<<endl;
                return;
            }
        }
    }
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