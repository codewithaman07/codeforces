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
		int n,m;
		cin>>n>>m;
		string x,s;
		cin>>x;
		cin>>s;
		bool flag = false;
		for(int i = 0; i<=5; i++){
			if(x.find(s) != string::npos){
				cout<<i<<endl;
				flag = true;
				break;
			}
			x.append(x);
		}
		if(!flag){
			cout<<-1<<endl;
		}
	}
	return 0;
}
