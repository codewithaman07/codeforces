#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
    string str;
    int flag=1;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i=i+2;
            if(!flag)
                cout<<" ";
            continue;
        }else{
            flag=0;
            cout<<str[i];
        }
        
    }
    return 0;
}
