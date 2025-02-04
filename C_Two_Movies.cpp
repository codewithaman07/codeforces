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
    int n; cin >> n;
    vector<int>a(n), b(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];
    int pos = 0, neg = 0, a1 = 0, b1 = 0;
    for(int i = 0; i<n; i++){
        if(a[i] == 1 and b[i] == 1){
            pos++;
            continue;
        }
        if(a[i] == -1 && b[i] == -1){
            neg++;
            continue;
        }
        if(a[i] == 1) a1++;
        if(b[i] == 1) b1++; 
    }
    while(neg--){
        if(a1<b1) b1--;
        else a1--;
    }
    while(pos--){
        if(a1<b1) a1++;
        else b1++;
    }
    cout<<min(a1,b1)<<endl;
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