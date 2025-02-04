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
    int n,k,s,b;
    cin>>n>>k>>b>>s;
    int mx = s/k;
    int mn = (s-(n-1)*(k-1))/k;
    if(b>mx || b<mn){
        cout<<-1<<endl;
        return;
    }
    vector<int>ans(n,0);
    if(s/k == b){
        ans[0] = s;
        for(int i = 0; i<n; i++){
            cout<<ans[i]<<" ";
        } cout<<endl;
        return;
    }
    int temp = (k*b)+(k-1);
    temp = (temp>s) ? s:temp;
    ans[0] = temp;
    int rem = s-temp; 
    for(int i = 1; i<n; i++){
        temp = (rem > k-1) ? (k-1) : rem;
        rem-=temp;
        ans[i] = temp;
    }
    for(int i = 0; i<n; i++) cout<<ans[i]<<" ";
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