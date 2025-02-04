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

int sum(int n) {
    return n*(n+1)/2;
}

void solve() {
    int n,x,y; cin>>n>>x>>y;
    int lcm = (x*y)/__gcd(x,y);
    int common = n/lcm;
    int a = (n/x)-common, b = (n/y)-common;
    cout<<(sum(n)-sum(n-a)-sum(b))<<endl;
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