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


int solve(int n) {
    if(n<10) return max(n,1ll);
    return max(solve(n/10)*(n%10), solve(n/10-1)*9);
}

signed main() {
    Aman();
    int n; cin>>n;
    cout<<solve(n);
    return 0;
}