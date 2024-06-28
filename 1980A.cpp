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
    int n, m, cnt = 0;
    cin>>n>>m;
    string s; cin>>s;
    vector<int>arr(256,0);
    for(auto it : s){
        arr[it]++;
    }
    string str = "ABCDEFG";
    for(auto it : str){
        if(arr[it]<m){
            cnt+=(m-arr[it]);
        }
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
