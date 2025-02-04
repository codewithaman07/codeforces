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
    string s; cin>>s;
    vector<int>arr(n);
    int temp = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'L'){
            temp+=i;
            arr.pb((n-i-1)-i);
        }
        else{
            temp+=(n-i-1);
            arr.pb(i-(n-i-1));
        }
    }
    sort(all(arr), greater<int>());
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            temp+=arr[i];
        }
        cout<<temp<<" ";
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