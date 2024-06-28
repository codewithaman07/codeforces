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
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int l = 0, r = n-1;
        if(arr[0] == arr[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            if(arr[0] == arr[1]){
                swap(arr[1],arr[n-1]);
            }
            for(int i = 0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}
