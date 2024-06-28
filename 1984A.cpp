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
        if(arr[0] == arr[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<"R";
            for(int i = 1; i<n; i++){
                if(arr[n-1] - arr[1] != 0){
                    cout<<"B";
                }
                else{
                    if(i != n-1){
                        cout<<"B";
                    }
                    else{
                        cout<<"R";
                    }
                }
            }
            cout<<endl;
        }
    }
    
    return 0;
}
