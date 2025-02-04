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
    char ch; cin>>ch;
    string s; cin>>s;
    int cnt = -1;
    for(int i = n-1; i>=0; i--){
        if(s[i] == ch){
            cnt = i+1;
            break;
        }
    }
    int x = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == ch){
            x++;
        }
    }
    if(x == n){
        cout<<0<<endl;
        return;
    }
    if(cnt > n/2){
        cout<<1<<endl;
        cout<<cnt<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
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