#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
 
int main(){

ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
   int tc;
   cin>>tc;
   while(tc--){
      int n,k,x;
      cin>>n>>k>>x;
      if(x != 1){
         cout<<"YES"<<endl;
         cout<<n<<endl;
         for(int i = 0; i<n; i++){
            cout<<1<<" ";
         }
         cout<<endl;
      }
      else{
         if(k == 1){
            cout<<"NO"<<endl;
         }
         else if(n%2 == 0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i = 0; i<n/2; i++){
               cout<<2<<" ";
            }
            cout<<endl;
         }
         else{
            if(k>=3){
               cout<<"YES"<<endl;
               cout<<n/2<<endl;
               for(int j = 0; j<((n/2)-1); j++){
                  cout<<2<<" ";
               }
               cout<<3<<endl;
            }
            else{
               cout<<"NO"<<endl;
            }
         }
      }
   }
   return 0;
}
