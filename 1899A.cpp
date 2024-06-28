#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%3 == 0){
			cout<<"Second"<<endl;
		}
		else{
			cout<<"First"<<endl;
		}
	}

	return 0;
}
