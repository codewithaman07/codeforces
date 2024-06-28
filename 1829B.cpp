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
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int cnt = 0;
        int maxi = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else{
                cnt = 0;
            }
        }
        cout<<maxi<<endl;
    }
    
    return 0;
}
