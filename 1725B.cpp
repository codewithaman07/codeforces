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
    int n,d;
    cin>>n>>d;
    vector<int>a(n);
    f(0,n) cin>>a[i];
    sort(a.begin(), a.end(), greater<int>());
    int cnt = 0;
    int i = 0, j = 0;
    while(i<n && j<=n){
       int num = ceil((d+1)/(a[i]*1.0));
       j+=num;
       if(j<=n) cnt++;
       i++;
    }
    cout<<cnt<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}

