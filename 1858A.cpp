#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+c)>(b+c)){
            cout<<"First"<<endl;
        }
        else if((a+c) == (b+c)){
            if((a == b) && (c%2 != 0)){
                cout<<"First"<<endl;
            }
            else if((a == b) && (c%2 == 0)){
                cout<<"Second"<<endl;
            }
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}
