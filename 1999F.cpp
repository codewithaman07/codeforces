#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(__null);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int M = 1e9+7;
const int N = 1e6;
vector<int>fact(N,1);
int powm(int x, int n){
    x %= M;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    int p = powm(x * x, n / 2);
    if (n % 2)
        return p * x % M;
    else
        return p;
}
 
int mod_div(int p, int q) { return p % M * powm(q, M - 2) % M; }
int ncr(int n, int r){
    if (r > n)
        return 0;
    return mod_div(fact[n], fact[n - r] * fact[r]);
}
/*_______________________________________________________________________________________________________*/

void solve() {
    int n,k; cin>>n>>k;
    vector<int>arr(n);
    f(0,n) cin>>arr[i];
    int c1 = count(all(arr), 1LL);
    int c0 = n-c1;
    int k1 = k/2+1;
    int ans = 0;
    if(k1>c1){
        cout<<0<<endl;
        return;
    }
    for(int i = k1; i<min(k,c1)+1; i++){
        ans = (ans+ncr(c1,i)*ncr(c0,k-i)%M)%M;
    }
    cout<<ans<<endl;
}

signed main() {
    fastio()

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    for(int i = 2; i<N; i++){
        fact[i] = fact[i-1]*i % M;
    }

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}