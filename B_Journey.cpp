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
    vector<int>a(3);
    f(0,3) cin>>a[i];
    int sum = a[0]+a[1]+a[2];
    int cnt = (n/sum)*3;
    if(n%sum==0){
        cout<<cnt<<endl;
        return;
    }
    int temp = n%sum;
    for(int i = 0; i<3; i++){
        temp-=a[i];
        cnt++;
        if(temp<=0){
            cout<<cnt<<endl;
            return;
        }
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