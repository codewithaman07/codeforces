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
    int l = 0, r = n-1;
    while(l<r){
        int mini = *st.begin();
        int maxi = *st.rbegin();
        if(a[l] == mini || a[l] == maxi){
            st.erase(a[l]);
            l++;
        }
        else if(a[r] == mini || a[r] == maxi){
            st.erase(a[r]);
            r--;
        }
        else{
            cout<<l+1<<" "<<r+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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