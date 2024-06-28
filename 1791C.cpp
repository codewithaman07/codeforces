#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        string s; cin>>s;
        int l = 0, r = n-1;
        while(l<r){
           if((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0')){
                l++;
                r--;
           }
           else{
                break;
           }
        }
        cout<<(r-l+1)<<endl;
    }
    
    return 0;
}
