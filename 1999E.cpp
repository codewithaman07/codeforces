#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(__null);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int mod = 1e9+7;
vector<int>arr;
int calc(int num){
    if(num<3) return 1;
    return 1+calc(num/3);
}
void solve() {
    int l,r; cin>>l>>r;
    cout<< 2*calc(l)+arr[r]-arr[l]<<endl;
}

int32_t main() {
    fastio()

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc = 1;
    cin >> tc;
    arr.assign(2e5+1,0);
    arr[1] = 1;
    for(int i = 2; i<2e5+1; i++){
        arr[i] = arr[i-1]+calc(i);
    }

    while (tc--) {
        solve();
    }
    return 0;
}