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

bool fun(int a, int b){
    vector<int> temp = {a, a, b};
    vector<int> temp2 = {a, b, b};
    sort(all(temp));
    sort(all(temp2));
    // a b b 
    // a a b
    if(temp[0]+temp[1] > temp[2] && temp2[0]+temp2[1]>temp2[2]) return 1;
    return 0;
}

void solve() {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    int f = 0;
    for(int i = 0; i<n-1; i++){
        if(fun(arr[i], arr[i+1]) == 1){
            f = 1;
            break;
        }
    }
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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