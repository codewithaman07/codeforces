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
    int k, l1, l2, r1, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    vector<int>temp;
    int num = 1;
    while(num <= r2){
        temp.pb(num);
        num*=k;
    }
    int ans = 0;
    for(int i = 0; i<temp.size(); i++){
        int p = r2/temp[i], q = (l2+temp[i]-1)/temp[i];
        int a =  min(r1, p);
        int b = max(l1, q);
        if(b<=a) ans+=(a-b+1);
    }
    cout<<ans<<endl;
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