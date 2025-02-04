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
    set<int>st;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    if(st.size() == 1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    int temp = -1;
    for(int i = 1; i<n; i++){
        if(a[i] != a[0]){
            temp = i;
            break;
        }
    }
    for(int i = 1; i<n; i++){
        if(a[i] != a[0]) cout<<1<<' '<<i+1<<endl;
        else cout<<temp+1<<' '<<i+1<<endl;  
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