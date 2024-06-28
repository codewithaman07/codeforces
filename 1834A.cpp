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
        int f1 = 0;
        int f2 = 0;
        for(int i = 0; i<n; i++){
            int temp;
            cin>>temp;
            if(temp == -1){
                f1++;
            }
            else{
                f2++;
            }
        }
        if(f1<=f2){
            if(f1%2 != 0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            int ops = f1- n/2;
            if((n/2) %2 != 0){
                ops++;
            }
            cout<<ops<<endl;
        } 
    }
    
    return 0;
}
