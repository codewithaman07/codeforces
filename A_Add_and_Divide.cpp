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

int fun(int a, int b){
    int op = 0;
    while(a>0){
        a/=b;
        op++;
    }
    return op;
}

void solve() {
    int a,b; cin>>a>>b;
    int mini = 1e9;
    for(int i = 0; i<=100; i++){
        if(b+i != 1){
            int op = i;
            op+=fun(a,b+i);
            mini = min(mini, op);
        }
    }
    cout<<mini<<endl;
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