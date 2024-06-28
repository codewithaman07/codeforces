#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n, m;
	cin>>n>>m;
	for(int i = 1; i<=n; i++){
		if(i%4 == 2){
			for(int j = 1; j<m; j++){
				cout<<".";
			}
			cout<<"#";
		}
		else if(i%4 == 0){
			cout<<"#";
			for(int j = 1; j<m; j++){
				cout<<".";
			}
		}
		else{
			for(int j = 1; j<=m; j++){
				cout<<"#";
			}
		}
		cout<<endl;
	}
	return 0;
}
