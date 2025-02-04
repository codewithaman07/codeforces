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

void fun(int n, map<int,int>&mp){
    for(int i = 2; i*i<=n; i++){
        while(n%i == 0){
            mp[i]++;
            n/=i;
        }
    }
    if(n>1) mp[n]++;
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    map<int,int>mp;
    for (int i = 0; i<n; i++){
        cin>>arr[i];
        fun(arr[i], mp);
    }
    for(auto [x,y] : mp){
        if(y%n != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

signed main() {
    Aman();
    sieve();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
