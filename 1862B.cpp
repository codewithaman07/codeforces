#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
 
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[n];
        vector<int>a;
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
        a.pb(b[0]);
        for(int i = 1; i<n; i++){
            if(b[i]>=b[i-1]){
                a.pb(b[i]);
            }
            else{
                a.pb(b[i]);
                a.pb(b[i]);
            }
        }
        int k = a.size();
        cout<<k<<endl;
        for(int i = 0; i<k; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}