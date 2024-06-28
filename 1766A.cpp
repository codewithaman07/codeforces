#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second

const int MOD = 1e9 + 7;

set<int>st;
bool check(int n){
    int cnt = 0;
    while(n>0){
        if(n%10) cnt++;
        n/=10;
    }
    return cnt == 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    for(int i = 1; i<1e7; i++){
            if(check(i)){
                st.insert(i);
            }
        }
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        
        int ans = 0;
        for(int num : st){
            if(num<=n) ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
