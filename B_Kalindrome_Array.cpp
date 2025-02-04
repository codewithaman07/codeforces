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

bool fun(vector<int>&arr, int x){
    int l = 0, r = arr.size()-1;
    while(l<r){
        if(arr[l] == x) l++;
        else if(arr[r] == x) r--;
        else if(arr[l] != arr[r]) return 0;
        else l++, r--;
    }
    return 1;
}

void solve() {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    bool f = 1;
    for(int i = 0; i<n-i-1; i++){
        if(arr[i] != arr[n-i-1]){
            f = fun(arr, arr[i]) || fun(arr, arr[n-i-1]);
            break;
        }
    }
    cout<<(f ? "YES" : "NO")<<endl;
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