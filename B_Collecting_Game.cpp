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
    vector<int> a(n),b(n), pre(n,0);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(all(a));
    for(int i = 1; i<n; i++) pre[i] = pre[i-1]+a[i-1];
    map<int,int>mp;
    mp[a[n-1]] = n-1;
    for(int i = n-2; i>=0; i--){
        if(pre[i+1]>=a[i+1]) mp[a[i]] = mp[a[i+1]];
        else mp[a[i]] = i;
    }
    for(int i = 0; i<n; i++){
        cout<<mp[b[i]]<<" ";
    }
    cout<<endl;
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