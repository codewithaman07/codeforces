#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
#define MOD 1000000007

void solve() {
    ll n,k,q; cin>>n>>k>>q;
    vector<ll>arr(n);
    f(0,n) cin>>arr[i];
    ll i = 0, cnt = 0;
    while(i<n){
        if(arr[i] > q){
            i++;
            continue;
        }
        ll j = i;
        while(j<n && arr[j]<=q){
            j++;
        }
        ll len = j-i;
        if(len>=k){
            cnt+= (len-k+1)*(len-k+2)/2;
        }
        i = j;
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

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
