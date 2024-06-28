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
      int x,k;
      cin>>x>>k;
      if(x<k || x%k != 0){
         cout<<1<<endl;
         cout<<x<<endl;
      }
      else{
         cout<<2<<endl;
         cout<<x-1<<" "<<1<<endl;
      }
   }
   return 0;
}
