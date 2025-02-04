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
    vector<int>a(n);
    int e = 0, o = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]&1) o++;
        else e++;
    }
    if(o>0 && e>0){
        cout<<2<<endl;
        return;
    }
    int temp = 4;
    while(1){
        set<int>rem;
        for(int i = 0; i<n; i++){
            rem.insert(a[i]%temp);
        }
        if(rem.size() == 2) break;
        temp*=2;
    }
    cout<<temp<<endl;
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