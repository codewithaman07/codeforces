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
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        if(i&1) arr[i] = x;
        else arr[i] = -x;
    }
    map<int,int>mp;
    mp[arr[0]] = 1;
    int sum = arr[0];
    for(int i = 1; i<n; i++){
        sum+=arr[i];
        if(sum == 0){
            cout<<"YES"<<endl;
            return;
        }
        if(mp.find(sum) != mp.end()){
            cout<<"YES"<<endl;
            return;
        }
        mp[sum] = 1;
    }
    cout<<"NO"<<endl;
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