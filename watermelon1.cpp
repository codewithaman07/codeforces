#include<iostream>
using namespace std;
int main(){
#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int w;
	cin>>w;
	if(w%2 == 0 && w!=2){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}
